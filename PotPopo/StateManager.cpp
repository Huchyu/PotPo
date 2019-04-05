#include "StateManager.h"
#include "Logo.h"
#include "Menu.h"
#include "Game.h"

StateManager* StateManager::pInst = nullptr;

void StateManager::SetState(STATE_ID state)
{
	if (pState != nullptr)
	{
		delete pState;
		pState = nullptr;
	}

	switch (state)
	{
	case LOGO:
		pState = new Logo;
		break;
	case MENU:
		pState = new Menu;
		break;
	case GAME:
		pState = new Game;
		break;
	case EXIT:
		exit(true);
		break;
	default:
		break;
	}

	pState->Initialize();
}

void StateManager::Progress()
{
	pState->Progress();
}

void StateManager::Render()
{
	pState->Render();
}

void StateManager::Release()
{
	pState->Release();
}

StateManager::StateManager()
{
	pState = nullptr;
}


StateManager::~StateManager()
{
	delete pState;
	pState = nullptr;
}