#pragma once
#include<iostream>

using namespace std;

class Base
{
protected:
	unsigned int x = 0, y = 0;
	unsigned int Length = 0, Width = 0;
	bool check = true;
public:
	Base& operator =(Base&);
	void Change_Coordinates(unsigned int a, unsigned int b) { x = a; y = b; }
	virtual void Print();
	friend ostream& operator <<(ostream& os, Base V);
	friend istream& operator >>(istream& os, Base V);
	void Change_Size(unsigned int a, unsigned int b) { Length = a; Width = b; }
	void Change_Visibility(bool ch) { check = ch; }
	unsigned int Get_X() { return x; }
	unsigned int Get_Y() { return y; }
	unsigned int Get_Length() { return Length; }
	unsigned int Get_Width() { return Width; }
	bool Get_Visibility() { return check; }
};