#pragma once
#include"Text.h"
#include"Color.h"
#include"Base.h"
#include<iostream>

class TextBox : public  Text, public Base
{
protected:
	Color T;
	bool Readonly = false;
public:
	TextBox& operator=(TextBox);
	TextBox() : Text(), Base(){}
	TextBox(TextBox&);
	void Print() override;
	int Get_Color_R() { return T.R; }
	int Get_Color_G() { return T.G; }
	int Get_Color_B() { return T.B; }
	void Change_Color_R(unsigned int a) { T.R = a; }
	void Change_Color_G(unsigned int a) { T.G = a; }
	void Change_Color_B(unsigned int a) { T.B = a; }
	void Change_Readonly(bool ch) { Readonly = ch; }
	bool Get_Readonly() { return Readonly; }
	friend std::ostream& operator <<(std::ostream& os, TextBox& V) { V.Print(); return os;}
};