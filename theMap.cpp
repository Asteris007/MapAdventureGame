#include "theMap.h"
#include "Character.h"
#include <iostream>
#include <windows.h>
#include <stdlib.h>
//#include <exeption>

using std::endl;		using std::cout;
using std::string;





void theMap::moveChar() {

    while (game_running = true) {

        system("cls");

        for (int i = 0; i < 32; i++) {
            for (int j = 0;j < 84;j++) {
                if (j == ch->getX() && i == ch->getY()) {
                    cout << '*';
                }
                
                else {
                    cout << map[i][j];
                }
            }
            cout << endl;
        }

       
      


        if (GetAsyncKeyState(VK_DOWN)) {
            int y2 = y + 1;
          
            if (map[y2][x] == ' ') {
                map[y][x] = ' ';
                y++;
                map[y][x] = '@';
                
            }
        }
        if (GetAsyncKeyState(VK_UP)) {
            int y1 = y - 1;
            if (map[y1][x] == ' ') {
                map[y][x] = ' ';
                y--;
                map[y][x] = '@';
            }
        }
        if (GetAsyncKeyState(VK_LEFT)) {
            int x2 = x - 1;
            if (map[y][x2] == ' ') {
                map[y][x] = ' ';
                x--;
                map[y][x] = '@';
                
            }
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            int x1 = x + 1;
            if (map[y][x1] == ' ') {
                map[y][x] = ' ';
                x++;
                map[y][x] = '@';
            }
        }

        if (GetAsyncKeyState(VK_ESCAPE)) {
            cout << "\n\n\nThank you for the game!\n\n\n";
            exit(3);
        }
        cout << "\n\n\nPress Escape to exit the game.\n\n\n";
        system("pause");
    }
}
void theMap::fullscreen()
{
    keybd_event(VK_MENU, 0x38, 0, 0);
    keybd_event(VK_RETURN, 0x1c, 0, 0);
    keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);


}




