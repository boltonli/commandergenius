/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * $URL: https://scummvm.svn.sourceforge.net/svnroot/scummvm/scummvm/tags/release-1-2-0/engines/gob/demos/batplayer.h $
 * $Id: batplayer.h 40746 2009-05-20 23:13:44Z drmccoy $
 *
 */

#ifndef GOB_BATPLAYER_H
#define GOB_BATPLAYER_H

#include "gob/demos/demoplayer.h"

namespace Gob {

class BATPlayer : public DemoPlayer {
public:
	BATPlayer(GobEngine *vm);
	virtual ~BATPlayer();

protected:
	virtual bool playStream(Common::SeekableReadStream &bat);
};

} // End of namespace Gob

#endif // GOB_BATPLAYER_H