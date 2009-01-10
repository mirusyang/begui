/* 
// Copyright 2007 Alexandros Panagopoulos
//
// This software is distributed under the terms of the GNU Lesser General Public Licence
//
// This file is part of Be3D library.
//
//    Be3D is free software: you can redistribute it and/or modify
//    it under the terms of the GNU Lesser General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    Be3D is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU Lesser General Public License for more details.
//
//    You should have received a copy of the GNU Lesser General Public License
//    along with Be3D.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "common.h"
#include "Light.h"
#include "Mesh.h"
#include "Texture.h"

class Scene
{
public:
	std::vector<Mesh*>	m_meshes;
	std::vector<Light*>	m_lights;

public:
	Scene();
	virtual ~Scene();

	void initialize();
	Mesh* addMesh();
	Light* addLight();
	void render(bool bShowNormals = false, bool bShowBBox = false);

	BBox getBBox()	{ return (m_meshes.size()>0)?m_meshes[0]->getBBox():BBox(); }
};