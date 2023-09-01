/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 *
 * Copyright (C) 2012 Joel Holdsworth <joel@airwebreathe.org.uk>
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

#include "signal.h"
#include <math.h> 
#include "view.h" 
#include "../basedef.h"
#include "../appcore/appcontrol.h"
#include "../appcore/sigsession.h"

namespace dsv {
namespace view {

Signal::Signal(sr_channel *probe) :
    Trace(probe->name, probe->index, probe->type),
    _probe(probe)
{
    session = AppControl::Instance()->GetSession();
}

Signal::Signal(const Signal &s, sr_channel *probe) :
    Trace((const Trace &)s), 
    _probe(probe)
{   
    session = AppControl::Instance()->GetSession();
}

bool Signal::enabled()
{
    return _probe->enabled;
}

void Signal::set_name(QString name)
{
    Trace::set_name(name);
    g_free(_probe->name);
    _probe->name = g_strdup(name.toUtf8().data());
}
} // namespace view
} // namespace dsv
