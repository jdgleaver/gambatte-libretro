/***************************************************************************
 *   Copyright (C) 2007 by Sindre Aam�s                                    *
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

#ifndef GDITOGGLER_H_
#define GDITOGGLER_H_

#include "../fullmodetoggler.h"

#include <QObject>
#include <vector>

#include "../resinfo.h"

class GdiToggler : public FullModeToggler {
	Q_OBJECT
		
	std::vector<ResInfo> infoVector;
	unsigned originalWidth;
	unsigned originalHeight;
	unsigned originalRate;
	unsigned fullResIndex;
	unsigned fullRateIndex;
	bool isFull;
	
public:
	GdiToggler();
	~GdiToggler();
	unsigned currentResIndex(unsigned /*screen*/) const { return fullResIndex; }
	unsigned currentRateIndex(unsigned /*screen*/) const { return fullRateIndex; }
	const QRect fullScreenRect(const QWidget *w) const;
	bool isFullMode() const { return isFull; }
	void setMode(unsigned screen, unsigned resIndex, unsigned rateIndex);
	void setFullMode(bool enable);
	void emitRate();
	const std::vector<ResInfo>& modeVector(unsigned /*screen*/) const { return infoVector; }
	void setScreen(const QWidget */*widget*/) {}
	unsigned screen() const { return 0; }
	unsigned screens() const { return 1; }
	
signals:
	void rateChange(int newHz);
//	void modeChange();
};

#endif /*GDITOGGLER_H_*/
