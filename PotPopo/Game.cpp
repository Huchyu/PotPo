#include "Game.h"
#include "DoubleBuffer.h"
#include "FirstStage.h"


void Game::Initialize()
{
	firstStage = new FirstStage;
	firstStage->Initialize();
}

void Game::Progress()
{
	firstStage->Progress();
}

void Game::Render()
{
	firstStage->Render();
}

void Game::Release()
{
	firstStage->Release();
}

Game::Game()
{
}


Game::~Game()
{
}
