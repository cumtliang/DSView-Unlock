/*
 * This file is part of the PulseView project.
 * DSView is based on PulseView.
 *
 * Copyright (C) 2014 Joel Holdsworth <joel@airwebreathe.org.uk>
 * Copyright (C) 2016 DreamSourceLab <support@dreamsourcelab.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef DSVIEW_PV_STORESESSION_H
#define DSVIEW_PV_STORESESSION_H

#include <stdint.h>
#include <string>
#include <thread>  
#include <QObject>
#include <libsigrok.h>
#include "../interface/icallbacks.h"
#include "zipmaker.h"

namespace dsv
{
  namespace data {
    class Snapshot;
    class LogicSnapshot;
    class AnalogSnapshot;
    class DsoSnapshot;
}
namespace appcore{
    class SigSession;
}
namespace dock {
    class ProtocolDock;
}
}

using namespace dsv::appcore;
using namespace dsv::data;
using namespace dsv::dock;

namespace dsv {
namespace com { 

class StoreSession : public QObject
{
	Q_OBJECT
  
public:
    StoreSession(SigSession *session);

	~StoreSession();

    SigSession* session();

	std::pair<uint64_t, uint64_t> progress();

	const QString& error();

    bool save_start();

    bool export_start();

	void wait();

	void cancel();

private:
    void save_proc(dsv::data::Snapshot *snapshot);
    void save_logic(dsv::data::LogicSnapshot *logic_snapshot);
    void save_analog(dsv::data::AnalogSnapshot *analog_snapshot);
    void save_dso(dsv::data::DsoSnapshot *dso_snapshot);
    bool meta_gen(data::Snapshot *snapshot, std::string &str);
    void export_proc(dsv::data::Snapshot *snapshot);   
    bool decoders_gen(std::string &str);
 

public:    
    bool gen_decoders_json(QJsonArray &array);
    bool load_decoders(dock::ProtocolDock *widget, QJsonArray &dec_array);
    QString MakeSaveFile(bool bDlg);
    QString MakeExportFile(bool bDlg);

    inline QString GetFileName()
        { return _file_name;}

    bool IsLogicDataType();
 

private:
    QList<QString> getSuportedExportFormats();
    double get_integer(GVariant * var);
    void MakeChunkName(char *chunk_name, int chunk_num, int index, int type, int version);

signals:
	void progress_updated();

public:
   ISessionDataGetter   *_sessionDataGetter;

private:
    QString         _file_name;
    QString         _suffix;
    SigSession      *_session;

	std::thread   _thread;

    const struct sr_output_module* _outModule;
 
	uint64_t        _units_stored;
	uint64_t        _unit_count;
    bool            _has_error;
	QString         _error;
    volatile bool   _canceled;
    ZipMaker        m_zipDoc;  
};

} //namespace com
} //namespace dsv

#endif // DSVIEW_PV_STORESESSION_H
