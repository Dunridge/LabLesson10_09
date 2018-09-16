// LabLesson10_09.cpp : Defines the entry point for the console application.
//

#include "conslib.h"

void main()
{
	int xr;
	int i = 1;

	int k = 1;

	while (true)
	{
		for (int i = 0; i < 1000; i++)
		{
			setCursorVisibility(false);
			printat(i, i, "*");
			pause(50);
			printat(i, i, " ");
		}
	}
	
	waitAnyKey();
}

//hello