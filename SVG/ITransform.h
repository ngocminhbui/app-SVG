#pragma once
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class ITransform{
private:
public:
	virtual void input() = 0;
	virtual string toSVG()=0;
};