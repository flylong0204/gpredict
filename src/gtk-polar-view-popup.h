/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
    Gpredict: Real-time satellite tracking and orbit prediction program

    Copyright (C)  2001-2013  Alexandru Csete, OZ9AEC.

    Authors: Alexandru Csete <oz9aec@gmail.com>

    Comments, questions and bugreports should be submitted via
    http://sourceforge.net/projects/gpredict/
    More details can be found at the project home page:

            http://gpredict.oz9aec.net/
 
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
  
    You should have received a copy of the GNU General Public License
    along with this program; if not, visit http://www.fsf.org/
*/
#ifndef GTK_POLAR_VIEW_POPUP_H
#define GTK_POLAR_VIEW_POPUP_H 1

#include <gtk/gtk.h>
#include "sgpsdp/sgp4sdp4.h"
#include "gtk-sat-data.h"
#include "gtk-polar-view.h"


void            gtk_polar_view_popup_exec(sat_t * sat, qth_t * qth,
                                          GtkPolarView * polv,
                                          GdkEventButton * event,
                                          GtkWidget * toplevel);

#endif
