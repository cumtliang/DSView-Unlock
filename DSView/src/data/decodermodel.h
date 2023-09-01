/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 *
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

#ifndef DSVIEW_PV_DATA_DECODERMODEL_H
#define DSVIEW_PV_DATA_DECODERMODEL_H

#include <QAbstractTableModel>
  
#include "../decode/rowdata.h"

namespace dsv {

namespace decode {
    class Annotation;
    class Decoder;
    class Row;
}

namespace data {

class DecoderStack;

class DecoderModel : public QAbstractTableModel
{
public:
    DecoderModel(QObject *parent = 0);

    int rowCount(const QModelIndex & /*parent*/) const;
    int columnCount(const QModelIndex & /*parent*/) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation,int role) const;

    void setDecoderStack(DecoderStack *decoder_stack);

    inline  DecoderStack* getDecoderStack(){
        return _decoder_stack;
    }

private:
    DecoderStack   *_decoder_stack;
};

} // namespace data
} // namespace dsv

#endif // DSVIEW_PV_DATA_DECODERMODEL_H
