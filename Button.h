#pragma once
#include"Base.h"
#include"ToolTipText.h"
#include<iostream>

class Button: public Base, public ToolTipText
{
protected:

public:
	Button& operator = (Button B);
	Button(Button&);
	Button():Base(), ToolTipText(){}
	void Print() override;
	friend std::ostream& operator <<(std::ostream& os, Button& V) { V.Print(); return os; }
};