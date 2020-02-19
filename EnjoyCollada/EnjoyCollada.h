#pragma once
#include <vector>
#include <iostream>
#include <sstream>

#include "tinyxml2.h"

using std::vector;
struct Int3
{
	int x, y, z;
};
struct Float3
{
	float x, y, z;
};

struct Float2
{
	float x, y;
};
struct  Temp_Mesh
{
	vector<Float3> vertices;
	vector<Float3> normals;
	vector<Float2> texcoords;
	vector<Int3> indices;
};
struct  EnjoyMesh
{
	vector<Float3> vertices;
	vector<Float3> normals;
	vector<Float2> texcoords;
	vector<int> indices;
};
/**
	Simple Collada loader, which only supports simple Collada format.
*/
class EnjoyCollada
{
public:
	EnjoyCollada(const char* path);

	auto GetMeshes()
	{
		return meshes;
	}
	auto GetNumMeshes()
	{
		return numMeshes;
	}
protected:
	vector<Temp_Mesh> temp_meshes;
	vector<EnjoyMesh> meshes;
	int numMeshes;
};

