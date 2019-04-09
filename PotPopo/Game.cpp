#include "Game.h"
#include "DoubleBuffer.h"
#include "FirstStage.h"
#include "Player.h"


void Game::Initialize()
{
	player = new Player;
	player->Initialize();
	firstStage = new FirstStage;
	firstStage->Initialize();
}

void Game::Progress()
{
	player->Progress();
	firstStage->Progress();

	if (firstStage->GetMapInfo(player->info.x, player->info.y) == firstStage->GetMapInfo(3,37))
	{
		DoubleBuffer::GetInst()->WriteBuffer(10, 10, "1", 5);
	}
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
