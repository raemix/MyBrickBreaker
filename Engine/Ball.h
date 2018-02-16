#pragma once
#include "Graphics.h"

class Ball
{


public:
	void Update();
	


	int x = Graphics::ScreenWidth / 2;
	int y = Graphics::ScreenHeight / 2;
	static constexpr int w = 20;
	static constexpr int h = 20;
	int vx = 1;
	int vy = 2;

};