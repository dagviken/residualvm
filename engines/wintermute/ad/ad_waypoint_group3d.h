/* ResidualVM - A 3D game interpreter
 *
 * ResidualVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

/*
 * This file is based on WME.
 * http://dead-code.org/redir.php?target=wme
 * Copyright (c) 2003-2013 Jan Nedoma and contributors
 */


#ifndef WINTERMUTE_AD_WAYPOINT_GROUP_3D_H
#define WINTERMUTE_AD_WAYPOINT_GROUP_3D_H

#include "../base/base.h"
#include "math/vector3d.h"
#include "../coll_templ.h"

namespace Wintermute {

class CAdSceneGeometry;
class Mesh;

class AdWaypointGroup3D : public BaseClass {
public:
	//DECLARE_PERSISTENT(AdWaypointGroup3D, BaseClass);
	bool _active;
	bool addFromMesh(Mesh *mesh);
	AdWaypointGroup3D(BaseGame *inGame);
	virtual ~AdWaypointGroup3D();
	BaseArray<Math::Vector3d *> _points;
};

}

#endif