/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 * 
 * Copyright (C) 2021 DreamSourceLab <support@dreamsourcelab.com>
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

#ifndef DECODE_DECODER_STATUS_H
#define DECODE_DECODER_STATUS_H

#include "annotationrestable.h"

namespace dsv{
namespace decode{

class DecoderStatus
{
public:
    DecoderStatus();

    void clear();  

public:
    bool    m_bNumeric; //when decoder get any numerical data,it will be set
    int     m_format; //protocol format code
    void    *sdr_decoder_handle;
    AnnotationResTable  m_resTable; 
};

} //namespace decode
} //namespace dsv

#endif //DECODE_DECODER_STATUS_H
