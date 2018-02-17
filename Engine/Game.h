/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();

private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawRect(int x, int y, int w, int h, int r, int g, int b);
	void gameOver();
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables     */

	
	bool ballDraw = true;
	static constexpr int brickRows = 6;
	static constexpr int brickCols = 12;
	int nBricks = brickRows * brickCols;
	
	int brickStartX = 30;
	int brickStartY = 50;
	int b = 0;

	int padW = 150;
	int padH = 20;
	int padX = (gfx.ScreenWidth / 2) - (padW / 2);
	int padY = gfx.ScreenHeight - padH;
	int padSpeed = 5;
	int padFadeRate = 0;
	bool paused = true;
	bool pauseInhibit = false;

public:
	Ball ball;
	Brick bricks[72];
	Paddle paddle;
	/********************************/

};