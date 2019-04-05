#pragma once
#include "StateObj.h"
#include "Map.h"
class Game : public StateObj
{
private:
	Map* firstStage;
public:
	virtual void Initialize();
	virtual void Progress();
	virtual void Render();
	virtual void Release();
public:
	Game();
	~Game();
};