// 0415_GameUpdate.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
struct player
{
    int x;
    int y;

}escape;
int main()
{
    srand(time(NULL)); // 목적지 랜덤위치
    string map_sharp[15][15];// 맵 크기 [10,10]
    player player;
    player.x = 0;
    player.y = 0;
    escape.x = (rand() % 9) + 1;
    escape.y = (rand() % 9) + 1;

    do
    {
        system("cls");


        for (int y = 0; y < 15; y++)  // # 넣기
        {

            for (int x = 0; x < 15; x++)
            {
                map_sharp[y][x] = ' ';
            }
        }

        map_sharp[player.y][player.x] = "*";
        map_sharp[escape.y][escape.x] = "O";

        for (int y = 0; y < 15; y++)  // 맵 생성
        {
            for (int x = 0; x < 15; x++)
            {
                cout << map_sharp[y][x];
            }
            cout << "\n";
        }

        char get_key = _getch();
        if (get_key == 65 || get_key == 97) // A
        {
            player.x--;
        }
        if (get_key == 68 || get_key == 100) // D
        {
            player.x++;
        }
        if (get_key == 83 || get_key == 115)// S
        {
            player.y++;
        }

        if (get_key == 87 || get_key == 119)// W
        {
            player.y--;
        }





    } while (map_sharp[player.y][player.x] == map_sharp[escape.x][escape.y]);

    cout << "게임 오버";
}
