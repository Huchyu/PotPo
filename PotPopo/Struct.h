#pragma once
#include "Enum.h"

typedef struct Position
{
	int x;
	int y;
}Pos;

typedef struct Infomation
{
	bool act;
	const char* shape;
	Pos pos;
	Color color;
}Info;