#pragma once
#include <string>
#include <sstream>
using namespace std;

class Style{
public:
	virtual string toSVG() = 0;
	virtual void input()=0;
};