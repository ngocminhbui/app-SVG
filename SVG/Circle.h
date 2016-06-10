#pragma once
#include "ShapeHasFill.h"

class Circle :public ShapeHasFill{
private:
	Point2D m_Tam;
	int m_Radius;
public:
	virtual void input(){
		cout << "Nhap thong tin cho hinh CIRCLE:" << endl;
		cout << "Nhap toa do tam:" << endl;
		m_Tam.input();
		cout << "nhap ban kinh:";
		cin >> m_Radius;
	}
	string toSVG(){
		stringstream buffer;
		buffer << "<circle ";
		buffer << "cx=\"" << this->m_Tam.getX() << "\"" << " cy=\"" << this->m_Tam.getY() << "\" "<<"r =\""<<this->m_Radius<<"\" ";
		
		return buffer.str()+ShapeHasFill::toSVG();
	}
};