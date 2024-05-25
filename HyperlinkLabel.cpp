#include"Base.h"
#include"URL.h"
#include"Text.h"
#include"Color.h"
#include<iostream>
#include"HyperlinkLabel.h"

using namespace std;

void HyperlinkLabel::Print()
{
	cout << "HyperlinkLabel:" << endl;
	Base::Print();
	URL::Print();
	cout << "Color:\n";
	cout << "Red: " << H.R << std::endl;
	cout << "Green: " << H.G << std::endl;
	cout << "Blue: " << H.B << std::endl;
}

HyperlinkLabel& HyperlinkLabel::operator=(HyperlinkLabel Hy)
{
	x = Hy.Get_X();
	y = Hy.Get_Y();
	Length = Hy.Get_Length();
	Width = Hy.Get_Width();
	check = Hy.Get_Visibility();
	Change_Text(Hy.Get_Text());
	Change_URL(Hy.Get_URL());
	H.R = Hy.Get_Color_R();
	H.G = Hy.Get_Color_G();
	H.G = Hy.Get_Color_G();
	return *this;
}

HyperlinkLabel::HyperlinkLabel(HyperlinkLabel& Hy):Base(), URL()
{
	x = Hy.Get_X();
	y = Hy.Get_Y();
	Length = Hy.Get_Length();
	Width = Hy.Get_Width();
	check = Hy.Get_Visibility();
	Change_Text(Hy.Get_Text());
	Change_URL(Hy.Get_URL());
	H.R = Hy.Get_Color_R();
	H.G = Hy.Get_Color_G();
	H.G = Hy.Get_Color_G();
}