#include<iostream>
#include"file.h"
#include<time.h>
#include"Base.h"
#include"Elipse.h"
#include"Button.h"
#include"HyperlinkLabel.h"

using namespace std;


Vector::Vector(){}

Vector::Vector(Button a)
{
	n = 1;
	VECTOR = new Base * ();
	*VECTOR = new Base();
	Button* B = new Button(a);
	*VECTOR = B;
}

Vector::Vector(Elipse a)
{
	n = 1;
	VECTOR = new Base * ();
	*VECTOR = new Base();
	Elipse* B = new Elipse(a);
	*VECTOR = B;
}

Vector::Vector(TextBox a)
{
	n = 1;
	VECTOR = new Base * ();
	*VECTOR = new Base();
	TextBox* B = new TextBox(a);
	*VECTOR = B;
}

Vector::Vector(HyperlinkLabel a)
{
	n = 1;
	VECTOR = new Base * ();
	*VECTOR = new Base();
	HyperlinkLabel* B = new HyperlinkLabel(a);
	*VECTOR = B;
}

Vector::Vector(Base** a)
{
	n = 1;
	VECTOR = a;
}

Vector::Vector(Vector& V)
{
	n = V.SizeOf();
	VECTOR = new Base *[n];
	for (int i = 0; i < n; i++)
		VECTOR[i] = V.VECTOR[i];
}

Vector::Vector(Vector&&V)
{
	*this = V;
	V.VECTOR = new Base*;
	V.VECTOR[0] = NULL;
}

Vector::~Vector()
{
	delete[] VECTOR;
	VECTOR = nullptr;
	n = 0;
}

Vector& Vector:: operator =(Vector&& V)
{
	swap(VECTOR, V.VECTOR);
	return *this;
}

Vector& Vector:: operator =(const Vector& V)
{
	if (this != &V)
	{
		int Size = SizeOf();
		this->Resize(Size);
		for (int i = 0; i < Size; i++)
			VECTOR[i] = V.VECTOR[i];
	}
	return *this;
}

Base* Vector:: operator [](int i)
{
	if (i >= 0 && i < this->SizeOf())
		return VECTOR[i];
	else
	{
		Base *b = nullptr;
		return b;
	}
}

 ostream& operator<<(ostream &os,Vector& V)
{
	 int Size = V.SizeOf();
	os << "Elements: ";
	for (int i = 0; i < Size; i++)
	{
		V[i]->Print();
		os << "\n";
	}
	 return os;
} 

int Vector::SizeOf()
{
	return n;
}

void Vector::Delete(int k)
{
	if (k < n && k >= 0)
	{
		if (n - 1 != 0)
		{
			Base** New = new Base * [n - 1];
			for (int i = 0; i < k; i++)
				New[i] = VECTOR[i];
			for (int i = k + 1; i < n; i++)
				New[i] = VECTOR[i];
			VECTOR = New;
			n--;
		}
		else
			VECTOR = NULL;
	}
}

void Vector::Clear()
{
	while (n != 0)
	{
		Delete(0);
	}
}

void Vector::PushBack(Base** a)
{
	Base** New = new Base * [n + 1];
	for (int i = 0; i < n; i++)
		New[i] = VECTOR[i];
	New[n] = *a;
	VECTOR = New;
	n++;
}

void Vector::PushBack(Button a)
{
	Base** New = new Base*[n + 1];
	Button* A = new Button(a);
	for (int i = 0; i < n; i++)
		New[i] = VECTOR[i];
	New[n] = A;
	VECTOR = New;
	n++;
}

void Vector::PushBack(Elipse a)
{
	Base** New = new Base * [n + 1];
	Elipse* A = new Elipse(a);
	for (int i = 0; i < n; i++)
		New[i] = VECTOR[i];
	New[n] = A;
	VECTOR = New;
	n++;
}

void Vector::PushBack(TextBox a)
{
	Base** New = new Base * [n + 1];
	TextBox* A = new TextBox(a);
	for (int i = 0; i < n; i++)
		New[i] = VECTOR[i];
	New[n] = A;
	VECTOR = New;
	n++;
}

void Vector::PushBack(HyperlinkLabel a)
{
	Base** New = new Base * [n + 1];
	HyperlinkLabel* A = new HyperlinkLabel(a);
	for (int i = 0; i < n; i++)
		New[i] = VECTOR[i];
	New[n] = A;
	VECTOR = New;
	n++;
}

void Vector::Resize(int a)
{
	Base** prev = new Base*[a];
	for (int i = 0; i < a && i < n; i++)
		prev[i] = VECTOR[i];
	for (int i = n; i < a; i++)
		prev[i] = NULL;
	VECTOR = prev;
	n = a;
}