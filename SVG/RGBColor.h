#pragma once
#include "Style.h"
#include <iostream>
using namespace std;
class RGBColor : public Style{
private:
	unsigned char m_R;
	unsigned char m_G;
	unsigned char m_B;
public:
	RGBColor(){};

	void input(){
		int a, b, c;
		cout << "Nhap cac thanh phan cua COLOR:" << endl;
		cout << "nhap thanh phan do:";
		cin >> a;
		cout << "nhap thanh phan xanh la:";
		cin >> b;
		cout << "nhap thanh phan xanh blue:";
		cin >> c;
		m_R = a;
		m_G = b;
		m_B = c;
	};
	RGBColor(unsigned char r, unsigned char g, unsigned char b){
		m_R = r;
		m_G = g;
		m_B = b;
	}
	unsigned char getR(){
		return this->m_R;
	}
	unsigned char getG(){
		return this->m_G;
	}
	unsigned char getB(){
		return this->m_B;
	}

	unsigned char setR(int val){
		return this->m_R = val;
	}
	unsigned char setG(int val){
		return this->m_G = val;
	}
	unsigned char setB(int val){
		return this->m_B = val;
	}

	virtual string toSVG(){
		stringstream buffer;
		buffer << "rgb(" << (int)this->m_R << "," << (int)this->m_G << "," << (int)this->m_B << ")";
		return buffer.str();
	}
};