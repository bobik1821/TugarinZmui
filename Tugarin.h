#pragma once
class Tugarin
{
	float x;
	float y;
	float spriteSizeX;
	float spriteSizeY;
	float SpeedX;
	float Ac;

public:
	float X() { return x; }
	float Y() { return y; }
	float SpriteSizeX() { return spriteSizeX; }
	float SpriteSizeY() { return spriteSizeY; }



public:
	Tugarin(float newX, float newY)
	{
		x = newX;
		y = newY;

		spriteSizeX = 120;
		spriteSizeY = 120;
		SpeedX = 0;
		Ac = 0;
	}
public: void GetDamage(float SpeedX, float Ac)
{
	this->SpeedX = SpeedX;
	this->Ac = Ac;
}
	  
public: void Move()
{


	if (this->SpeedX >0)
	{
		if (x >= 260 && x <= 350)
		{
			x -= this->SpeedX;
			this->SpeedX -= Ac;
		}
		else
		{
			x = 260;
			this->SpeedX = 0;
			this->Ac = 0;
		}
		
		
	}
	if (this->SpeedX <0)
	{
		if (x <= 260 )
		{
			x -= this->SpeedX;
			this->SpeedX -= Ac;
		}
		else
		{
			x = 260;
			this->SpeedX = 0;
			this->Ac = 0;
		}


	}
	
}
};