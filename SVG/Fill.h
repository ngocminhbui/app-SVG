#pragma once
#include "RGBColor.h"
#include "Style.h"
class Fill:public Style{
private:
	RGBColor m_Color;
	float m_Opacity;
public:
	Fill() {};
	void input(){
		cout << "nhap thong so cho phan FILL:" << endl;
		m_Color.input();
		cout << "nhap do trong suot:" ;
		cin >> m_Opacity;
	}
	Fill(RGBColor color, float opacity){
		m_Color = color;
		m_Opacity = opacity;
	}
	RGBColor getColor(){
		return m_Color;
	}
	float getOpacity(){
		return m_Opacity;
	}

	RGBColor setColor(RGBColor val){
		return m_Color=val;
	}
	float setOpacity(float val){
		return m_Opacity = val;
	}
	virtual string toSVG(){
		stringstream buffer;
		buffer << "fill=\"" << this->m_Color.toSVG() << "\" ";
		if (this->m_Opacity != 0)
			buffer << "fill-opacity=\"" << this->m_Opacity << "\" ";
		return buffer.str();
	}
};

