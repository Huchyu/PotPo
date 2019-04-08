#include "Game.h"
#include "DoubleBuffer.h"
#include "FirstStage.h"
#include "Player.h"


void Game::Initialize()
{
	firstStage = new FirstStage;
	player = new Player;
	player->Initialize();
	firstStage->Initialize();
}

void Game::Progress()
{
	player->Progress();
	firstStage->Progress();
}

void Game::Render()
{
	player->Render();
	firstStage->Render();
}

void Game::Release()
{
	player->Release();
	firstStage->Release();
}

Game::Game()
{
}


Game::~Game()
{
}
