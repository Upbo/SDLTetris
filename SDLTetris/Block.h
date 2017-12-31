#pragma once
#include <SDL.h>
#include "Tile.h"
enum COLOR
{
	RED,
	GREEN,
	BLUE,
	YELLOW,
	PINK,
	ORANGE,
};

enum TYPE
{
	// http://www.colinfahey.com/tetris/tetris_diagram_pieces_orientations_new.jpg
	O,
	I,
	S,
	Z,
	L,
	J,
	T,
};

class Block
{
	private:
	int color;
	bool isActive;

	public:
	Block();
	Tile blockPiece[4];

	void init();
	void update();
};