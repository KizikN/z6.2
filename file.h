#pragma once
#include"Base.h"
#include<iostream>
#include"Button.h"
#include"Elipse.h"
#include"HyperlinkLabel.h"
#include"TextBox.h"

using namespace std;

class Vector
{
	Base** VECTOR = NULL;
	int n = 0;
public:
	Vector();
	Vector(Base**);
	Vector(Button a);
	Vector(Elipse a);
	Vector(TextBox a);
	Vector(HyperlinkLabel a);
	Vector(Vector& V);
	Vector(Vector&&V);
	~Vector();
	void Delete(int k);
	void Clear();
	void PushBack(Button a);
	void PushBack(Elipse a);
	void PushBack(TextBox a);
	void PushBack(HyperlinkLabel a);
	void PushBack(Base** a);
	Vector& operator =(const Vector& V);
	Vector& operator =(Vector&& V);
	Base* operator [](int i);
	int SizeOf();
	void Resize(int a);
	friend std::ostream& operator <<(std::ostream  &os, Vector& V);
	friend Base;
	friend Button;
	friend TextBox;
	friend Elipse;
};