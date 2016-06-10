#pragma once
#include "ShapeHasFill.h"

class Polygon :public ShapeHasFill{
private:
	vector<Point2D> m_Points;
public:
	virtual void input(){
		cout << "Nhap thong tin cho POLYGON:" << endl;
		cout << "nhap so dinh cua da giac:" << endl;
		int n;
		cin >> n;
		m_Points.resize(n);
		cout << "Nhap thong tin tung dinh:" << endl;
		for (int i = 0; i < n; i++){
			cout << "Nhap thong tin dinh thu " << i + 1 << ":" << endl;
			m_Points[i].input();
		}

		ShapeHasFill::input();
	}
	string toSVG(){
		stringstream buffer;
		buffer << "<polygon ";
		int n = this->m_Points.size();
		buffer << "points=\"";
		for (int i = 0; i < n; i++){
			buffer << m_Points[i].getX() << "," << m_Points[i].getY() << " ";
		}
		buffer << "\" ";

		return buffer.str() + ShapeHasFill::toSVG();
	}
};