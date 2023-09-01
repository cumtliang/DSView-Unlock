
/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 * 
 * Copyright (C) 2023 DreamSourceLab <support@dreamsourcelab.com>
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

#ifndef DSV_BASE_DEF_H
#define DSV_BASE_DEF_H

#ifdef _WIN32
    #define DSV_EXPORT     __declspec(dllexport)
    #define DSV_IMPORT     __declspec(dllimport)
    #define DSV_HIDDEN
#else
    #define DSV_EXPORT     __attribute__((visibility("default")))
    #define DSV_IMPORT     __attribute__((visibility("default")))
    #define DSV_HIDDEN     __attribute__((visibility("hidden")))
#endif


#define countof(x) (sizeof(x)/sizeof(x[0]))

#define begin_element(x) (&x[0])
#define end_element(x) (&x[countof(x)])

enum View_type {
    TIME_VIEW,
    FFT_VIEW,
    ALL_VIEW
};

#define DESTROY_OBJECT(p) if((p)){delete (p); p = NULL;} 
#define DESTROY_QT_OBJECT(p) if((p)){((p))->deleteLater(); p = NULL;}
#define DESTROY_QT_LATER(p) ((p))->deleteLater();

#define RELEASE_ARRAY(a)   for (auto ptr : (a)){delete ptr;} (a).clear();

#define ABS_VAL(x) ((x) > 0 ? (x) : -(x))

#define ds_max(a,b) ((a) > (b) ? (a) : (b))
#define ds_min(a,b) ((a) < (b) ? (a) : (b))

#define SESSION_FORMAT_VERSION      3
#define HEADER_FORMAT_VERSION       3

#endif