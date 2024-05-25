#include<iostream>
#include"ElipseColor.h"
#include"Base.h"
#include"Elipse.h"

using namespace std;

void Elipse::Print()
{
	cout << "Elipse:" << endl;
	Base::Print();
	ElipseColor::Print();
}

Elipse& Elipse::operator=(Elipse E)
{

	x = E.Get_X();
	y = E.Get_Y();
	Length = E.Get_Length();
	Width = E.Get_Width();
	check = E.Get_Visibility();
	Fill.R = E.Get_Fill_R();
	Fill.G = E.Get_Fill_G();
	Fill.B = E.Get_Fill_B();
	Border.R = E.Get_Border_R();
	Border.G = E.Get_Border_G();
	Border.B = E.Get_Border_B();
	return *this;
}

Elipse::Elipse(Elipse& E) :Base(), ElipseColor()
{
	x = E.Get_X();
	y = E.Get_Y();
	Length = E.Get_Length();
	Width = E.Get_Width();
	check = E.Get_Visibility();
	Fill.R = E.Get_Fill_R();
	Fill.G = E.Get_Fill_G();
	Fill.B = E.Get_Fill_B();
	Border.R = E.Get_Border_R();
	Border.G = E.Get_Border_G();
	Border.B = E.Get_Border_B();
}