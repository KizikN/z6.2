#pragma once

class Text
{
protected:
	char* text;
public:
Text()
{
	text = new char[50];
	text[0] = 'N';
	text[1] = 'e';
	text[2] = 'w';
	text[3] = ' ';
	text[4] = 't';
	text[5] = 'e';
	text[6] = 'x';
	text[7] = 't';
	text[8] = '\0';
}
void virtual Print();
char* Get_Text() { return text; }
void Change_Text(char* a) { text = a; }
};