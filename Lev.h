#pragma once
#include "Tugarin.h"
class Lev
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
	Lev(float newX, float newY)
	{
		x = newX;
		y = newY;

		spriteSizeX = 80;
		spriteSizeY = 160;
	}
	
	void levoe()
	{
		if (x = 200)
		{
			y = 120;
			x = 259;
		}
	}
		
	
	
public: void DoDaamage(Tugarin &tugarin, float spX, float ac)
{
	tugarin.GetDamage(spX, ac);
}
};