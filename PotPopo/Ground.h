#pragma once
#include "Obj.h"
class Ground : public Obj
{
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();

public:
	Ground();
	~Ground();
};

