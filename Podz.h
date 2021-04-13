#pragma once
#include "Tugarin.h"
class Podz
{
	float x;
	float y;
	float spriteSizeX;
	float spriteSizeY;

public:
	float X() { return x; }
	float Y() { return y; }
	float SpriteSizeX() { return spriteSizeX; }
	float SpriteSizeY() { return spriteSizeY; }



public:
	Podz(float newX, float newY)
	{
		x = newX;
		y = newY;

		spriteSizeX = 100;
		spriteSizeY = 150;
	}
public: void DooDaamage(Tugarin &tugarin, float spX, float ac)
{
	tugarin.GetDamage(spX, ac);
}
};