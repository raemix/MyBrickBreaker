#pragma once

#include "Colors.h"
#include "Graphics.h"

class Paddle
{
public:
	//Paddle(int x);
	void Update();
	void Draw(Graphics& gfx);
	int x = int(Graphics::ScreenWidth * 0.66);
	int y = Graphics::ScreenHeight - 21;
	int w = 150;
	int h = 20;

	Color c{ 0,255,0 };


};