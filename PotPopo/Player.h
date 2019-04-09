#pragma once
#include "Obj.h"
class Player : public Obj
{
private:
	bool JumpKey = false;
	bool JumpDown = false;
	int JumpNum = 0;
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();

public:
	Player();
	~Player();
};