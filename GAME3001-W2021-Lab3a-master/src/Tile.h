#pragma once
#ifndef __TILE__
#define __TILE__
#include "DisplayObject.h"

class Tile : public DisplayObject
{
public:
	//constructor
	Tile();

	//destructor
	~Tile();

	void draw() override;
	void update() override;
	void clean() override;
};



#endif /*defined __TILE__*/