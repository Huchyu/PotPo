#include "KeyManager.h"

KeyManager* KeyManager::pInst = nullptr;

void KeyManager::CheckKey()
{
	dwKey = 0;

	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		dwKey |= KEY_UP;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		dwKey |= KEY_DOWN;
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		dwKey |= KEY_LEFT;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		dwKey |= KEY_RIGHT;
	}
	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
	{
		dwKey |= KEY_SPACE;
	}
	if (GetAsyncKeyState(VK_RETURN) & 0x8000)
	{
		dwKey |= KEY_RETURN;

	}
}

KeyManager::KeyManager()
{
}


KeyManager::~KeyManager()
{
}