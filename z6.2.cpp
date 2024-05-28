#include<iostream>
#include"Base.h"
#include"Color.h"
#include"ElipseColor.h"
#include"Button.h"
#include"Elipse.h"
#include"TextBox.h"
#include"HyperlinkLabel.h"
#include"file.h"

using namespace std;

int main()
{
	Button B;
	B.Change_Size(12, 13);
	Vector b(B);			//создание
	Base** a = new Base*;
	*a = &B;
	b.PushBack(a);			//универсальный PushBack
	cout << b;
	cout << endl << endl;	//вывод
	b.Delete(1);			//удаление
	cout << b;
	return 0;
}