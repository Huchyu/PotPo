#pragma once
#include "include.h"

class DoubleBuffer
{
public:
	virtual void Initilize() PURE;
	virtual void Progress() PURE;
	virtual void Render() PURE;
	virtual void Release() PURE;
public:
	DoubleBuffer();
	~DoubleBuffer();
};

