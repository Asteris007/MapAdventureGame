
#include "theMap.h"
#include <iostream>

int main()
{
	Character* ch = new Character("name", 0, 1, 2, 3, 4, 1, 1);
	theMap m{ 1, 1, ch };
	m.fullscreen();
	m.moveChar();
	
return 0;

}


