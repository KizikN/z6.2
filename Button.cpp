#include"Base.h"
#include"ToolTipText.h"
#include"Button.h"
#include<iostream>

using namespace std;

void Button::Print()
{
	cout << "Button:" << endl;
	Base::Print();
	ToolTipText::Print();
}

Button& Button::operator=(Button B)
{
	x = B.Get_X();
	y = B.Get_Y();
	Length = B.Get_Length();
	Width = B.Get_Width();
	check = B.Get_Visibility();
	Change_Text(B.Get_Text());
	Change_ToolTipText(B.Get_ToolTipText());
	return *this;
}

Button::Button(Button& a):Base(), ToolTipText()
{
	x = a.Get_X();
	y = a.Get_Y();
	Width = a.Get_Width();
	Length = a.Get_Length();
	check = a.Get_Visibility();
	tooltiptext = a.Get_ToolTipText();
	Change_Text(a.Get_Text());
}