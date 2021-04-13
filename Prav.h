#pragma once
#include "Tugarin.h"
class Prav
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
	Prav(float newX, float newY)
	{
		x = newX;
		y = newY;

		spriteSizeX = 80;
		spriteSizeY = 185;
	}

public: void DoDamage(Tugarin &tugarin, float spX, float ac)
{
	tugarin.GetDamage(spX, ac);
}
	
};