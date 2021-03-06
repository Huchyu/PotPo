#pragma once
#include "StateObj.h"
#include "Obj.h"
#include "Map.h"
class Game : public StateObj
{
private:
	Obj* player;
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