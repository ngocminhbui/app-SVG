#pragma once
#include "RGBColor.h"
#include "Style.h"

class Stroke:public Style{
private:
	RGBColor m_Color;
	float m_Opacity;
	int m_width;
public:
	Stroke(){}
	void input (){
		cout << "nhap thong so cho phan STROKE:" << endl;
		m_Color.input();
		cout << "Nhap do trong suot:";
		cin >> m_Opacity;
		cout << "Nhap do day:";
		cin >> m_width;
	};
	Stroke(RGBColor color, float opa, int w){
		m_Color = color;
		m_Opacity = opa;
		m_width = w;
	}
	RGBColor getColor(){
		return m_Color;
	}
	float getOpacity(){
		return m_Opacity;
	}
	int getWidth(){
		return m_width;
	}
	RGBColor setColor(RGBColor val){
		return m_Color=val;
	}
	float setOpacity(int val){
		return m_Opacity=val;
	}
	int setWidth(int val){
		return m_width = val;
	}

	virtual string toSVG(){
		stringstream buffer;
		buffer << "stroke=\"" << this->m_Color.toSVG() << "\"" << " stroke-width=\"" << this->m_width << "\" ";
		if (this->m_Opacity != 0)
			buffer << "stroke-opacity=\"" << this->m_Opacity << "\"";
		return buffer.str();
	}
};