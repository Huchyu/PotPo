#include "Player.h"
#include "KeyManager.h"
#include "DoubleBuffer.h"


void Player::Initialize()
{
	info.act = true;
	info.x = 50;
	info.y = 20;
	info.shape[0] = "¡Ü";
	info.shape[1] = "¡â";
	info.cx = strlen(info.shape[1]);
	info.cy = ObjHeight;
	info.color = Èò»ö;

}

void Player::Progress()
{
	DWORD dwKey = KeyManager::GetInst()->GetKey();

	if (dwKey & KEY_LEFT)
	{
		if (info.x > 4)
		info.x -= 2;
	}

	if (dwKey & KEY_UP )
	{
		if(info.y > 2)
		info.y--;
	}

	if (dwKey & KEY_RIGHT)
	{
		if(info.x < 94)
		info.x += 2;
	}

	if (dwKey & KEY_DOWN)
	{
		if (info.y < 36)
		info.y++;
	}

}

void Player::Render()
{
	for (int i = 0; i < ObjHeight; i++)
	{
		DoubleBuffer::GetInst()->WriteBuffer(info.x, info.y + i, info.shape[i], info.color);
	}

	//DoubleBuffer::GetInst()->WriteBuffer(5, 5, (const char*)info.x, 5);
}

void Player::Release()
{
}

Player::Player()
{
}


Player::~Player()
{
}
