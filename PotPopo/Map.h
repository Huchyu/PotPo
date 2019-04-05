#pragma once
#include "Include.h"
class Map
{
public:
	int map[MapHeight][MapWidth] = { 0 };
public:
	virtual void Initialize() PURE;
	virtual void Progress() PURE;
	virtual void Render() PURE;
	virtual void Release() PURE;
public:
	int GetMapInfo(int x, int y)
	{
		return map[y][x];
	}
public:
	Map();
	~Map();
};