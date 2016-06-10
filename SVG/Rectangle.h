#pragma once
#include "ShapeHasFill.h"

class Rectangle :public ShapeHasFill{
private:
	Point2D m_firstPoint;
	int m_width;
	int m_height;
public:
	virtual void input(){
		cout << "nhap thong tin cho hinh RECTANGLE:" << endl;
		cout << "Nhap dinh trai-tren:" << endl;
		m_firstPoint.input();
		cout << "nhap do rong va do cao:" << endl;
		cin >> m_width >> m_height;
		ShapeHasFill::input();
	}
	string toSVG(){
		stringstream buffer;
		buffer << "<rect ";
		buffer << "x=\"" << this->m_firstPoint.getX() << "\"" << " y=\"" << this->m_firstPoint.getY() << "\" ";
		buffer << "width=\"" << this->m_width << "\" height=\"" << this->m_height << "\" ";
		return buffer.str()+ShapeHasFill::toSVG();
	}
};