﻿// 0412_HomeWork.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
    /*

    1)
    *
    **
    ***
    ****
    *****

    2)
          *
         **
        ***
       ****
      *****

    3)
    *****
    ****
    ***
    **
    *

    4)
    *****
     ****
      ***
       **
        *

    5)
         *
        ***
       *****
      *******
     *********

     6)
     *********
      *******
       *****
        ***
         *

    7)

         *
        ***
       *****
      *******
     *********
      *******
       *****
        ***
         *


    8)

     *********
      *******
       *****
        ***
         *
        ***
       *****
      *******
     *********

    */



    cout << "1번 문제" << endl;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "2번 문제" << endl;

    for (int i = 5; i > 0; i--)
    {
        for (int a = i - 1; a > 0; a--)
        {
            cout << " ";
        }
        int b = 6 - i;
        for (int c = 0; c < b; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "3번 문제" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            cout << "*";
        }
        cout << " \n";
    }

    cout << "4번 문제" << endl;
    for (int i = 1; i < 6; i++)
    {
        for (int a = i - 1; a > 0; a--)
        {
            cout << " ";
        }
        int b = i;
        for (int c = 6; c > b; c--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "5번 문제" << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int a = i - 1; a > 0; a--)
        {
            cout << " ";
        }
        int b = 6 - i;
        for (int c = 0; c < b * 2 - 1; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "6번 문제" << endl;
    for (int i = 1; i < 6; i++)
    {
        for (int a = i - 1; a > 0; a--)
        {
            cout << " ";
        }
        for (int c = 10; c > i * 2 - 1; c--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "7번 문제" << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int a = i - 1; a > 0; a--)
        {
            cout << " ";
        }
        int b = 6 - i;
        for (int c = 0; c < b * 2 - 1; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i < 6; i++)
    {
        for (int a = i; a > 0; a--)
        {
            cout << " ";
        }
        for (int c = 8; c > i * 2 - 1; c--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "8번 문제" << endl;

    for (int i = 1; i < 6; i++)
    {
        for (int a = i; a > 0; a--)
        {
            cout << " ";
        }
        for (int c = 10; c > i * 2 - 1; c--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 4; i > 0; i--)
    {
        for (int a = i ; a > 0; a--)
        {
            cout << " ";
        }
        int b = 6 - i;
        for (int c = 0; c < b * 2 - 1; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "9번 문제" << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < (i*2)-1; j++)
        {
            cout << "*" << endl;;
        }
        cout << " \n";
    }

    

}






// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
