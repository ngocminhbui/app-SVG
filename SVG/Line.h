#pragma once
#include "ShapeNoFill.h"

class Line :public ShapeNoFill{
private:
	Point2D m_firstPoint;
	Point2D m_secondPoint;
public:
	Line(){
	}
	void input(){
		cout << "Nhap thong tin cho LINE:" << endl;
		cout << "Nhap thong tin diem dau:" << endl;
		m_firstPoint.input();
		cout << "nhap thong tin diem cuoi:" << endl;
		m_secondPoint.input();

		ShapeNoFill::input();
	}
	string toSVG(){
		stringstream buffer;
		buffer << "<line ";
		buffer << "x1=\"" << this->m_firstPoint.getX() << "\"" << " y1=\"" << this->m_firstPoint.getY() << "\" ";
		buffer << "x2=\"" << this->m_secondPoint.getX() << "\"" << " y2=\"" << this->m_secondPoint.getY() << "\" ";
		
		return buffer.str() + ShapeNoFill::toSVG();
	}
};