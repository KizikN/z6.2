#include<iostream>
#include"Base.h"

using namespace std;


void Base::Print()
{
	std::cout << "x = " << x << "\ny = " << y << std::endl;
	std::cout << "Length: " << Length << "\nWidth: " << Width << std::endl;
	if (check)
		std::cout << "Element is visible.\n";
	else
		std::cout << "Element is invisible.\n";
}

Base& Base::operator=(Base& B)
{
	Change_Coordinates(B.Get_X(), B.Get_Y());
	Length = B.Get_Length();
	Width = B.Get_Width();
	check = B.Get_Visibility();
	return *this;
}

ostream& operator<<(ostream& os, Base V)
{
	return os;
}

istream& operator>>(istream& os, Base V)
{
	V.Print();
	return os;
}