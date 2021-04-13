#pragma once
#include "Tugarin.h"
class Shelb
{
	float x;
	float y;
	float spriteSizeX;
	float spriteSizeY;
	float SpeedX;
	float SpeedY;

public:
	float X() { return x; }
	float Y() { return y; }
	float SpriteSizeX() { return spriteSizeX; }
	float SpriteSizeY() { return spriteSizeY; }
	



public:
	Shelb(float newX, float newY)
	{
		x = newX;
		y = newY;
		SpeedX = 0;
		SpeedY = 0;

		spriteSizeX = 80;
		spriteSizeY = 150;
	}
public: void DooDamage(Tugarin& tugarin, float spX, float ac)
{
	tugarin.GetDamage(spX, ac);
}
};