#pragma once
#include "Calculating.h"
#include <fstream>
using namespace std;

void GetText(string Operation)
{
	ofstream History;
	History.open("D:\C++\Project1\History.txt");
	if (History.is_open())
	{
		History << Operation << endl;
	}
	History.close();
}