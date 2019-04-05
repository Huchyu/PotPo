#include "MainGame.h"
#include "StateManager.h"
#include "DoubleBuffer.h"

void MainGame::Initialize()
{
	DoubleBuffer::GetInst()->InitDoubleBuffer();

	StateManager::GetInst()->SetState(GAME);
}

void MainGame::Progress()
{

	DoubleBuffer::GetInst()->FlipBuffer();
	DoubleBuffer::GetInst()->ClearBuffer();

	StateManager::GetInst()->Progress();
}

void MainGame::Render()
{
	StateManager::GetInst()->Render();
}

void MainGame::Release()
{
	DoubleBuffer::GetInst()->DestroyBuffer();
	StateManager::GetInst()->Release();
}

MainGame::MainGame()
{
}


MainGame::~MainGame()
{
}