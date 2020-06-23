
#include "theMap.h"
#include "TheMagician.h"
#include "Character.h"
#include <iostream>
#include <string>

using std::string;

int main()
{
	//Character* ch = new Character("name", 0, 1, 2, 3, 4, 1, 1);
	//theMap m{ 1, 1, ch };
	
	TheMagician* mag = new TheMagician("Magic", 100, 40, 40, 1, 1,60);
	mag->DisplayCh();


	theMap m{ 1,1,mag };
	m.fullscreen();
	m.moveChar();
	
	
return 0;

}

