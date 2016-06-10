#pragma once
#include <iostream>
using namespace std;
class Point2D{
private:
	int m_x;
	int m_y;
public:
	Point2D(){};

	void input(){
		cout << "nhap hoanh do:";
		cin >> m_x;
		cout << "nhap tung do:";
		cin >> m_y;
	}

	Point2D(int x, int y){
		m_x = x;
		m_y = y;
	}
	int getX(){
		return m_x;
	}
	int getY(){
		return m_y;
	}
	int setX(int x){
		return m_x = x;
	}
	int setY(int y){
		return m_y = y;
	}
};