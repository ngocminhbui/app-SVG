#pragma once
#include "ITransform.h"
class Translate :public ITransform{
private:
	int m_dx;
	int m_dy;
public:
	virtual void input(){
		cout << "nhap do doi theo x va y:" << endl;
		cin >> m_dx>>m_dy;
	}
	virtual string toSVG(){
		stringstream buffer;
		buffer << "translate(" << this->m_dx <<", "<<this->m_dy<< ") " << endl;
		return buffer.str();
	}
};