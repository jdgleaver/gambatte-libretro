/***************************************************************************
 *   Copyright (C) 2007 by Sindre AamÂs                                    *
 *   aamas@stud.ntnu.no                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License version 2 as     *
 *   published by the Free Software Foundation.                            *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License version 2 for more details.                *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   version 2 along with this program; if not, write to the               *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "addaudioengines.h"

//#include "audioengines/openalengine.h"
#include "audioengines/coreaudioengine.h"

void addAudioEngines(std::vector<AudioEngine*> &audioEngines, WId /*winId*/) {
	audioEngines.push_back(new CoreAudioEngine);
//	audioEngines.push_back(new OpenAlEngine);
}
