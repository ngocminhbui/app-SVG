#pragma once
#include <string>
#include <vector>
using namespace std;
#include "Point2D.h"
#include "RGBColor.h"
#include "Fill.h"
#include "Stroke.h"
#include "ITransform.h"

using namespace std;
#include "Rotate.h"
#include "Translate.h"
class Shape{
protected:
	Stroke m_Stroke;
	vector<ITransform*> m_Transform;
public:
	Shape(){
	}
	virtual void input(){
		this->m_Stroke.input();
		cout << "Nhap so luong phep bien hinh:" << endl;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int type;
			cout << "nhap loai phep bien hinh: (rotate 1) (translate 0):";
			cin >> type;
			if (type){
				ITransform *r = new Rotate;
				r->input();
				this->m_Transform.push_back(r);
			}
			else{
				ITransform *t = new Translate;
				t->input();
				this->m_Transform.push_back(t);
			}
		}
	}
	virtual string toSVG(){
		stringstream buffer;
		buffer << m_Stroke.toSVG();

		int n = this->m_Transform.size();
		if (n != 0){
			buffer << "transform=\"";
			for (int i = 0; i < n; i++)
				buffer << this->m_Transform[i]->toSVG();
			buffer << "\" ";
		}
		buffer << "/>\n";
		return buffer.str();
	}

	Shape& operator=(const Shape& a){
		this->m_Stroke = a.m_Stroke;	
	}
	~Shape(){
		for (int i = 0; i < this->m_Transform.size(); i++)
			delete m_Transform[i];
	}
};