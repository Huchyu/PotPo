#pragma once
#include "Enum.h"

typedef struct Position
{
	int x;
	int y;
}POS;

typedef struct Position
{
	int cx;
	int cy;
}CXPOS;

typedef struct Infomation
{
	bool act;
	const char* shape;
	POS pos;
	CXPOS cxpos;
	Color color;
}INFO;