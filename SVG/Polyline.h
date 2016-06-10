#pragma once
#include "ShapeHasFill.h"

class Polyline :public ShapeHasFill{
private:
	vector<Point2D> m_Points;
public:
	virtual void input(){
		cout << "Nhap thong tin cho POLYLINE:" << endl;
		cout << "nhap so diem cua duong gap khuc:" << endl;
		int n;
		cin >> n;
		m_Points.resize(n);
		cout << "Nhap thong tin tung diem cua duong gap khuc:" << endl;
		for (int i = 0; i < n; i++){
			cout << "Nhap thong tin diem thu " << i + 1 << ":" << endl;
			m_Points[i].input();
		}
		
		ShapeHasFill::input();
	}
	string toSVG(){
		stringstream buffer;
		buffer << "<polyline ";
		int n = this->m_Points.size();
		buffer << "Points=\"";
		for (int i = 0; i < n; i++){
			buffer << m_Points[i].getX() << "," << m_Points[i].getY() << " ";
		}
		buffer << "\"";
		
		return buffer.str()+ShapeHasFill::toSVG();
	}
};