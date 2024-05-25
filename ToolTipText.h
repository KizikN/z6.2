#pragma once
#include"Text.h"

class ToolTipText: public Text
{
protected:
	char* tooltiptext;
public:
	ToolTipText() :Text()
	{
		tooltiptext = new char[50];
		tooltiptext[0] = 'N';
		tooltiptext[1] = 'e';
		tooltiptext[2] = 'w';
		tooltiptext[3] = ' ';
		tooltiptext[4] = 't';
		tooltiptext[5] = 'o';
		tooltiptext[6] = 'o';
		tooltiptext[7] = 'l';
		tooltiptext[8] = 't';
		tooltiptext[9] = 'i';
		tooltiptext[10] = 'p';
		tooltiptext[11] = 't';
		tooltiptext[12] = 'e';
		tooltiptext[13] = 'x';
		tooltiptext[14] = 't';
		tooltiptext[15] = '\0';
	}
	virtual void Print() override;
	char* Get_ToolTipText() { return tooltiptext; }
	void Change_ToolTipText(char* a) { tooltiptext = a; }
};