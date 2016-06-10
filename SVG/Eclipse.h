#pragma once
#include "ShapeHasFill.h"

class Eclipse :public ShapeHasFill{
private:
	Point2D m_Tam;
	int m_RadiusX;
	int m_RadiusY;
public:
	virtual void input(){
		cout << "Nhap thong tin cho hinh ECLIPSE:" << endl;
		cout << "nhap toa do tam:";
		m_Tam.input();
		cout << "nhap ban kinh X va ban kinh Y:";
		cin >> m_RadiusX >> m_RadiusY;
		ShapeHasFill::input();
	}
	string toSVG(){
		stringstream buffer;
		buffer << "<ellipse ";
		buffer << "cx=\"" << this->m_Tam.getX() << "\"" << " cy=\"" << this->m_Tam.getY() << "\" " << "rx =\"" << this->m_RadiusX << "\" " << "ry =\"" << this->m_RadiusY << "\" ";
	
		return buffer.str()+ShapeHasFill::toSVG();
	}
};