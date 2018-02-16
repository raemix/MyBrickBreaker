#pragma once
#include "Graphics.h"
//#include "Game.h"
#include "Ball.h"


class Brick {


public:

	void Init(int x, int y);
	void Update(Ball& ball);
	void Draw(Graphics& gfx);
	static bool isColliding(int x0, int y0, int w0, int h0, int x1, int y1, int w1, int h1);


	int x;
	int y;
	static constexpr int w = 60;
	static constexpr int h = 30;
	bool destroyed = false;
	Color c{ 0,0,255 };
};