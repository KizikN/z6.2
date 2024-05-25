#pragma once

#include"Base.h"
#include"ElipseColor.h"
#include<iostream>

class Elipse : public Base, public ElipseColor
{
public:
	Elipse& operator=(Elipse E);
	Elipse(Elipse&);
	Elipse() : Base(), ElipseColor(){}
	void Print() override;
	friend std::ostream& operator <<(std::ostream& os, Elipse& V) { V.Print(); return os;}
};