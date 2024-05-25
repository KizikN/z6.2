#include<iostream>
#include"URL.h"
#include"Text.h"

using namespace std;

void URL::Print()
{
	cout << "URL:" << endl;
	for (int i = 0; url[i] != '\0'; i++)
		cout << url[i];
	cout << endl;
	Text::Print();
}