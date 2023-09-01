/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 *
 * Copyright (C) 2013 DreamSourceLab <support@dreamsourcelab.com>
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


#ifndef DSVIEW_SV_GROUPSIGNAL_H
#define DSVIEW_SV_GROUPSIGNAL_H

/*
#include "signal.h"

#include <list> 

namespace dsv {

namespace view {

//created by SigSession
class GroupSignal : public Trace
{
private:
	static const QColor SignalColours[4];

	static const float EnvelopeThreshold;

    enum GroupSetRegions{
        NONEREG = -1,
        CHNLREG,
    };

public:
    GroupSignal(QString name,
                std::list<int> probe_index_list, int group_index);

    virtual ~GroupSignal();

    bool enabled();

    dsv::data::SignalData* data();

	void set_scale(float scale);

    void paint_mid(QPainter &p, int left, int right, QColor fore, QColor back);

    QRectF get_rect(GroupSetRegions type, int y, int right);

protected:
    void paint_type_options(QPainter &p, int right, const QPoint pt, QColor fore);

private:
    void paint_trace(QPainter &p,
		int y, int left, const int64_t start, const int64_t end,
		const double pixels_offset, const double samples_per_pixel);

    void paint_envelope(QPainter &p,
		int y, int left, const int64_t start, const int64_t end,
		const double pixels_offset, const double samples_per_pixel);

private: 
	float _scale;
};

} // namespace view
} // namespace dsv

*/

#endif // DSVIEW_PV_GROUPSIGNAL_H
