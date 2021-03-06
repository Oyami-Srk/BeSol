//Jason Wrinkle - Solitaire Game 
//Copyright (C) 1999  Jason Wrinkle (jwrinkle@utdallas.edu)
//
//This program is free software; you can redistribute it and/or 
//modify it under the terms of the GNU General Public License 
//as published by the Free Software Foundation; either version 2 
//of the License, or (at your option) any later version. 
//
//This program is distributed in the hope that it will be useful, 
//but WITHOUT ANY WARRANTY; without even the implied warranty of 
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
//GNU General Public License for more details. 
//
//You should have received a copy of the GNU General Public License 
//along with this program; if not, write to the Free Software 
//Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA. 


// PileEditor.h
// Generated by Interface Elements (Window v2.3) on Mar 12 1999
// This is a user written class and will not be overwritten.

#ifndef _PILEEDITOR_H_
#define _PILEEDITOR_H_

#include <Beep.h>

#include <list>
#include <algorithm>
using namespace std;

#include "IEWindow.h"
#include "prop_struct.h"
#include "other project defs.h"
#include "deck_struct.h"

#ifndef PEDITDEFS
#define PEDITDEFS
#include "PileEditorDefs.h"
#endif

class PileEditor : public IEWindow
{
public:
	PileEditor(void);
	~PileEditor(void);

	void Add_Target(BView* trgt);
	void Remove_Target(BView* trgt);
	void pile_removed(int index);
	void piles_added(BMessage* message);
	void CleanUp();
	
	friend class PILE;
	
	virtual void MessageReceived(BMessage *message);
	pile_props* current_props;
private:
	void Reset();
	list <BView*> targets;
};

#endif
