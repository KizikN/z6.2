#include"Text.h"
#include"Base.h"
#include"ToolTipText.h"
#include<iostream>

using namespace std;

void ToolTipText::Print()
{
	Text::Print();
	cout << "ToolTipText:" << endl;
	for (int i = 0; tooltiptext[i] != '\0'; i++)
		cout << tooltiptext[i];
	cout << endl;
}