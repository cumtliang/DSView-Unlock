/*
 * This file is part of the PulseView project.
 * DSView is based on PulseView.
 * 
 * Copyright (C) 2013 Joel Holdsworth <joel@airwebreathe.org.uk>
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

#ifndef DSVIEW_PV_PROP_BINDING_DECODEROPTIONS_H
#define DSVIEW_PV_PROP_BINDING_DECODEROPTIONS_H

#include "binding.h"
#include <QFont>
#include "../property.h"

struct srd_decoder_option;

namespace dsv{
	namespace decode{
    	class Decoder;
	}

	namespace data{
		class DecoderStack;
	}
}

using namespace dsv::data;
using namespace dsv::decode;

namespace dsv {
namespace prop {
namespace binding {

class DecoderOptions : public Binding
{
public:
	DecoderOptions(DecoderStack *decoder_stack, Decoder* decoder);

    GVariant* getter(const char *id);

    void setter(const char *id, GVariant *value);

private:
	static Property* bind_enum(const QString &name,
		const srd_decoder_option *option,
		Property::Getter getter, Property::Setter setter);



private:
	Decoder 	*_decoder;
};

} // binding
} // prop
} // pv

#endif // DSVIEW_PV_PROP_BINDING_DECODEROPTIONS_H
