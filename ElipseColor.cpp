#include<iostream>
#include"ElipseColor.h"

using namespace std;


void ElipseColor::Print()
{
	std::cout << "Border color:\n";
	std::cout << "Red: " << Border.R << std::endl;
	std::cout << "Green: " << Border.G << std::endl;
	std::cout << "Blue: " << Border.B << std::endl;
	std::cout << "Fill color:\n";
	std::cout << "Red: " << Fill.R << std::endl;
	std::cout << "Green: " << Fill.G << std::endl;
	std::cout << "Blue: " << Fill.B << std::endl;
}