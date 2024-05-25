#include"Text.h"
#include"Color.h"
#include"Base.h"
#include"TextBox.h"
#include<iostream>

using namespace std;

void TextBox::Print()
{
	cout << "TextBox:" << endl;
	Base::Print();
	Text::Print();
	cout << "Color:\n";
	cout << "Red: " << T.R << std::endl;
	cout << "Green: " << T.G << std::endl;
	cout << "Blue: " << T.B << std::endl;
}

TextBox& TextBox::operator=(TextBox Te)
{
	x = Te.Get_X();
	y = Te.Get_Y();
	Length = Te.Get_Length();
	Width = Te.Get_Width();
	check = Te.Get_Visibility();
	T.R = Te.Get_Color_R();
	T.G = Te.Get_Color_G();
	T.G = Te.Get_Color_G();
	Change_Text(Te.Get_Text());
	Readonly = Te.Get_Readonly();
	return *this;
}

TextBox::TextBox(TextBox& Te):Base(), Text()
{
	x = Te.Get_X();
	y = Te.Get_Y();
	Length = Te.Get_Length();
	Width = Te.Get_Width();
	check = Te.Get_Visibility();
	T.R = Te.Get_Color_R();
	T.G = Te.Get_Color_G();
	T.G = Te.Get_Color_G();
	Change_Text(Te.Get_Text());
	Readonly = Te.Get_Readonly();
}