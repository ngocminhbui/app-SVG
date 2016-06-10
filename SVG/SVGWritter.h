#pragma once
#include "Shape.h"
#include <iostream>
#include <fstream>
using namespace std;
class SVGFileWritter{
private:
	int m_height;
	int m_width;
	string outFile;
	vector<Shape*> m_Shape;
public:
	SVGFileWritter(string outFile, vector<Shape*> k, int h=0, int w=0){
		this->outFile = outFile;
		m_Shape = k;
		this->m_width = w;
		this->m_height = h;
	}
	void write(){
		ofstream out(outFile);
		if (m_height==0 || m_width==0) //default
			out << "<svg xmlns = \"http://www.w3.org/2000/svg\">" << endl;
		else
			out << "<svg xmlns = \"http://www.w3.org/2000/svg\" height=\""<<this->m_height<<"\" width=\""<<this->m_width<<"\">" << endl;
		
		int n = m_Shape.size();

		for (int i = 0; i < n; i++)
			out<<m_Shape[i]->toSVG();
		out << "</svg>";
		out.close();
	}
	
};