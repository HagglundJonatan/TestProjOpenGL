// TestProjOpenGl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Display.h"

int main(int argc, char *argv[])
{
	Display display(800, 600, "Hello world");

	while (!display.isClosed())
	{
		display.clear(0.0f, 0.15f, 0.3f, 1.0f);

		display.update();
	}

    return 0;
}

