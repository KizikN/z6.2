#pragma once
#include"Base.h"
#include"URL.h"
#include"Text.h"
#include"Color.h"
#include<iostream>


class HyperlinkLabel: public Base, public URL
{
protected:
	Color H;
public:
	HyperlinkLabel& operator =(HyperlinkLabel H);
	HyperlinkLabel() : Base(), URL(){}
	HyperlinkLabel(HyperlinkLabel&);
	void Print() override;
	int Get_Color_R(){ return H.R; }
	int Get_Color_G() { return H.G; }
	int Get_Color_B() { return H.B; }
	void Change_Color_R(unsigned int a) { H.R = a; }
	void Change_Color_G(unsigned int a) { H.G = a; }
	void Change_Color_B(unsigned int a) { H.B = a; }
	friend std::ostream& operator <<(std::ostream& os, HyperlinkLabel& V) { V.Print(); return os;}
};

