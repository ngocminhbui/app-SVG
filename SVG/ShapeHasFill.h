#pragma once
#include "Shape.h"

class ShapeHasFill :public Shape{
private:
protected:
	Fill m_Fill;
public:
	ShapeHasFill(){
	}
	virtual void input(){
		cout << "Nhap thong tin phan FILL:" << endl;
		m_Fill.input();
		Shape::input();
	}
	virtual string toSVG(){
		return m_Fill.toSVG() + Shape::toSVG();
	}
};