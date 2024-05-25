#pragma once
#include"Text.h"

class URL: public Text
{
protected:
	char* url;
public:
	URL() : Text() 
	{
		url = new char[25];
		url[0] = 'N';
		url[1] = 'e';
		url[2] = 'w';
		url[3] = ' ';
		url[4] = 'U';
		url[5] = 'R';
		url[6] = 'L';
		url[7] = '\0';
	}
	void virtual Print() override;
	char* Get_URL() { return url; }
	void Change_URL(char* a) { url = a; }
};