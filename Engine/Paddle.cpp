#include "Paddle.h"


void Paddle::Update()
{
}

void Paddle::Draw(Graphics& gfx)
{
	gfx.DrawRectByDim(x, y, w, h, c);

}
