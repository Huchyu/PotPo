#pragma once
#include "DoubleBuffer.h"
class MainGame
{
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	MainGame();
	~MainGame();
};