#include <iostream>
#include <Windows.h>

#include "tinyxml2.h"
#include "EnjoyCollada.h"

int main(int argc, char* argv[])
{
	EnjoyCollada collada("TestLevel.dae");
	
	system("pause");
	return 0;
}