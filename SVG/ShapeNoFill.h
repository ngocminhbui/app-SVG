#pragma once
#include "Shape.h"

class ShapeNoFill :public Shape{
private:
public:
	virtual void input(){
		Shape::input();
	}
};