#pragma once
#include "Graphics.h"

class Ball
{


public:
	void Update();
	void Draw(Graphics& gfx);
	Color c{ 255,255,0 };

	float x = Graphics::ScreenWidth / 2;
	float y = Graphics::ScreenHeight / 2;
	static constexpr int w = 20;
	static constexpr int h = 20;
	float vx = 1.0f;
	float vy = 2.0f;
	//Graphics& gfx;
};