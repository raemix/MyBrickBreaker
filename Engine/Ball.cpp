#include "Ball.h"
#include "Graphics.h"

void Ball::Update()
{
	x += vx;
	y += vy;

	if (x < 0) {
		x = 0;
		vx = 0 - vx;
	}
	if (x > Graphics::ScreenWidth - w) {
		x = Graphics::ScreenWidth - 1 - w;
		vx = 0 - vx;
	}
	if (y < 0) {
		y = 0;
		vy = 0 - vy;
	}
	if (y > Graphics::ScreenHeight - h) {
		y = Graphics::ScreenHeight - 1 - h;
		vy = 0 - vy;
	}
}
