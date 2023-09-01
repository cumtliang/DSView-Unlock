/*
 * This file is part of the DSView project.
 * DSView is based on PulseView.
 *
 * Copyright (C) 2022 DreamSourceLab <support@dreamsourcelab.com>
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

#include "keywordlineedit.h"
#include "../config/appconfig.h"

#include "../ui/langresource.h"

KeywordLineEdit::KeywordLineEdit(QWidget *parent, IKeywordActive *active)
:QLineEdit(parent)
{ 
    _bText = false;
    _active = active;
    this->ResetText();
}

 void KeywordLineEdit::mousePressEvent(QMouseEvent *e)
 {
      if (e->button() == Qt::LeftButton && _active != NULL){          
         _active->BeginEditKeyword();
     } 
     QLineEdit::mousePressEvent(e); 
 }

 void KeywordLineEdit::ResetText()
 { 
     if (_bText){
         return;         
     }

    //tr
    this->setText(L_S(STR_PAGE_DLG, S_ID(IDS_DLG_KEY_DECODER_SEARCH), "Decoder search..."));
 }

 void KeywordLineEdit::SetInputText(QString text)
 {
     _bText = true;
     this->setText(text);
 }
