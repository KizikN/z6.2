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
	Vector b(B);			//��������
	Base** a = new Base*;
	*a = &B;
	b.PushBack(a);			//������������� PushBack
	cout << b;
	cout << endl << endl;	//�����
	b.Delete(1);			//��������
	cout << b;
	return 0;
}