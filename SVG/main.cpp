#include "Fill.h"
#include "Line.h"
#include "Rectangle.h"
#include "Polyline.h"
#include "Polygon.h"
#include "Eclipse.h"
#include "SVGWritter.h"
#include <iostream>
#include <string>
#include <fstream>

//#pragma warning(disable: 4996) 
using namespace std;


int main(){
	freopen("sample1INPUT.txt", "r", stdin);
	vector <Shape*> sample1;
	sample1.resize(2);
	sample1[0] = new Rectangle;
	sample1[1] = new Polygon;
	
	for (int i = 0; i < 2; i++)
		sample1[i]->input();
	SVGFileWritter fileS1("sample1.html", sample1,400,600);
	fileS1.write();
	for (int i = 0; i < 2; i++)
		delete sample1[i];

	freopen("sample2INPUT.txt", "r", stdin);
	vector <Shape*> sample2;
	sample2.resize(3);
	sample2[0] = new Eclipse;
	sample2[1] = new Eclipse;
	sample2[2] = new Eclipse;

	for (int i = 0; i < 3; i++)
		sample2[i]->input();
	SVGFileWritter fileS2("sample2.html", sample2, 150, 500);
	fileS2.write();
	for (int i = 0; i <3 ; i++)
		delete sample2[i];


	freopen("sample3INPUT.txt", "r", stdin);
	vector <Shape*> sample3;
	sample3.resize(1);
	sample3[0] = new Polyline;
	sample3[0]->input();

	SVGFileWritter fileS3("sample3.html", sample3, 180, 500);
	fileS3.write();
	delete sample3[0];


	freopen("sample4INPUT.txt", "r", stdin);
	vector <Shape*> sample4;
	sample4.resize(1);
	sample4[0] = new Polygon;
	sample4[0]->input();

	SVGFileWritter fileS4("sample4.html", sample4, 250, 500);
	fileS4.write();
	delete sample4[0];
}



