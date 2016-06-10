#pragma once
#include "ITransform.h"
class Rotate :public ITransform{
private:
	int m_deg;
public:
	virtual void input(){
		cout << "nhap goc quay:" << endl;
		cin >> m_deg;
	}
	virtual string toSVG(){
		stringstream buffer;
		buffer << "rotate(" << this->m_deg << ") ";
		return buffer.str();
	}
};