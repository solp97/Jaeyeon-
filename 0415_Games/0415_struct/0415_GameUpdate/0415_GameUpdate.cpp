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
    int weary;
}escape;

struct map
{
    string name;
    
    string name2;
    string name3;
};
int main()
{
    srand(time(NULL)); // 목적지 랜덤위치
    string map_sharp[30][30];// 맵 크기 [10,10]
    player player;
    map map;
    player.x = 0;
    player.y = 0;
    escape.x = (rand() % 31) + 1;
    escape.y = (rand() % 31) + 1;
    player.weary = 100;
    map.name = "평지";
    map.name2 = "늪";
    map.name3 = "숲";
    string what_map = "";
    do
    {
        system("cls");

       
        for (int y = 0; y < 30; y++)  // # 넣기
        {

            for (int x = 0; x < 30; x++)
            {
                map_sharp[y][x] = ' ';
            }
        }

        map_sharp[player.y][player.x] = "*";
        map_sharp[escape.y][escape.x] = "O";
        
        
        for (int y = 0; y < 30; y++)  // 맵 생성
        {
            for (int x = 0; x < 30; x++)
            {
                cout << map_sharp[y][x];
            }
            cout << "\n";
        }
         if (15 > player.x >= 0 && 15 > player.y >= 0)
        {
            what_map = map.name2;
            player.weary = player.weary - 3;\
        }

         else if (20 > player.x >= 15 && 20 > player.y >= 15)
         {
             what_map = map.name3;
             player.weary = player.weary - 1;
         }
         else if (20 > player.x >= 15 && 20 > player.y >= 15)
         {
             what_map = map.name3;
             player.weary = player.weary - 1;
         }
        cout << "피로도: " << player.weary<<"         " << "현재 위치:" << what_map<<endl;
        cout << "플레이어 좌표 =" << player.x << " , " << player.y;


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
        if (15 > player.x >= 0 || 15 > player.y >= 0)
        {
            what_map = map.name;
        }

        if (20 > player.x >= 15 || 20 > player.y >= 15)
        {
            what_map = map.name2;
            player.weary = player.weary - 3;
        }
        if (30 > player.x >= 20 || 30 > player.y >= 20)
        {
            what_map = map.name3;
            player.weary = player.weary - 1;
        }
        
    } while (map_sharp[player.y][player.x] == map_sharp[escape.x][escape.y]);

    cout << "게임 오버";
}
