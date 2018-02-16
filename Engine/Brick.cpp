#include "Brick.h"
#include <Math.h>


void Brick::Init(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
	
}

void Brick::Update(Ball& in_ball)
{
	Ball& ball = in_ball;
	if (!destroyed) {
		if (isColliding(x, y, w, h, ball.x, ball.y, ball.w, ball.h)) {
			
			destroyed = true;
			if (ball.x + ball.w <= x +1)
				ball.vx = 0 - abs(ball.vx);
			if (ball.x + 1 >= x + w)
				ball.vx = 0 + abs(ball.vx);
			if (ball.y + 1 >= y + h)
				ball.vy = 0 + abs(ball.vy);
			if (ball.y + ball.h <= y + 1)
				ball.vy = 0 - abs(ball.vy);
		}
	}
	
}

void Brick::Draw(Graphics& gfx)
{
	if (!destroyed)
	gfx.DrawRectByDim(x, y, w, h);
}

bool Brick::isColliding(int x0, int y0, int w0, int h0, int x1, int y1, int w1, int h1)
{
	const int right0 = x0 + w0;
	const int bottom0 = y0 + h0;
	const int right1 = x1 + w1;
	const int bottom1 = y1 + h1;



	return right0 >= x1 &&
		x0 <= right1 &&
		bottom0 >= y1 &&
		y0 <= bottom1;
}