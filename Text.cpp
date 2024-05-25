#include<iostream>
#include"Text.h"

using namespace std;

void Text::Print()
{
	cout << "Text:" << endl;
	for (int i = 0; text[i] != '\0'; i++)
		cout << text[i];
	cout << endl;
}