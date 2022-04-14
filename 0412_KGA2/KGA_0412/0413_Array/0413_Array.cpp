/*
* 
* 
*   boolean타입
*   bool is_alive = false; // true (1) 아니면 false (0) 로만 표현 (1바이트)
* 
    배열 (자료구조)
    "같은 데이터타입"의 여러 변수를 하나의 묶음으로 나타낸 것.


    배열의 데이터타입에 대한 동일한 크기로 메모리상에 연속된 공간이 할당된다.
    배열명이 메모리 시작 주소이다.

    2차원배열 및 다차원배열
    배열이 (개념적으로) 2중으로, 다중으로 구성되어 있는 것.

    1차원 배열: int student_names[5]; 5개의 int
        -> 5 명의 학생이 있다.
    2차원 배열: int student_names[3][5]; 15개의 int
        -> 3개 반에 각각 5명의 학생이 있다.

    int student_names[3][5] = { { 1,2,3,4,5},
                                { 6,7,8,9,10},
                                { 11,12,13,14,15} };
    
    cout << student_names[0][0] << endl;


    3차원 배열: int student_names[4][3][5]; 60개의 int
        -> 4개 학년에 각각 3개 반이 존재, 각 반에 5명의 학생이 있다.


    (엔터 없이 ) 문자 하나를 입력받는 방법
    _getch();

    -데이터형변환 : 데이터타입을 변환한다.
    묵시적 형변환 

    명시적 형변환 : 문법을 써서 강제로 변환
    cout << (int)input_key_char << endl;


*/



#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int main()
{
    //int input_key = _getch();
    //char input_key_char = _getch();
    //cout << (int)input_key_char << endl;
    //float test_float = 5.4f; // f가없으면 double로 인식

    /*int nums[10] = { 1,22,3,34,5,64,75,8,9,12 };

    cout << nums[8] << endl;


    for (int i = 0; i < 10; i++)

    {

        cout << nums[i] << endl;



    }
*/

/*실습. string 형 배열변수 5개짜리를 선언하고
반복문을 통해 학생의ㅏ 으름을 입력 받는다

입력을 다 받도나서 1~5 사이의 값을 입력하면 해당학생의 이름이 출력된다.

예시)
1번째 학생의 이름을 입력하세요 :
2번째 학생의 이름을 입력하세요 :
3번째 학생의 이름을 입력하세요 :
4번째 학생의 이름을 입력하세요 :
5번째 학생의 이름을 입력하세요 :

1~5사이의 번호를 입력하세요 :
3번째 학생의 이름은 ... 입니다.



string names[5];
int num;

for (int i = 0; i < 5; i++)
{
    cout << i+1 << "번째 학생의 이름을 입력하세요 :";
    cin >> names[i];

}
cout << "1~5사이의 번호를 입력하세요 :";
cin >> num;
cout << num << "번째 학생의 이름은: " << names[num - 1] << "입니다" << endl;*/

/* int student_nums[3][5] = { { 1,2,3,4,5},
                             { 6,7,8,9,10},
                             { 11,12,13,14,15} };


 for (int i = 0; i < 3; i++)
 {
     for (int j = 0; j < 5; j++)
     {

         cout << student_nums[i][j] << endl;


     }


 }*/

 ////구구단의 결과를 저장하는 2차원 배열을 하나 선언하고,
 ////이중 for문을 이용홰서 배열 변수에 구구단의 결과값을 저장하고,
 ////두 수를 입력받아서 적합한 결과값을 출력해보자
 //int googoo_nums[8][9];
 //int what_Num;
 //int what_Num2;
 //for (int i =0 ; i > 8; i++)
 //{
 //    
 //    for (int j = 0; j > 9; j++)
 //    {
 //        googoo_nums[i][j] = (i + 2) * (j + 1);
 //    }
 //}
 //cout << "(결과 저장 완료)\n";
 //cout << "몇단? :";
 //cin >> what_Num;
 //cout << "몇을 곱할? :";
 //cin >> what_Num2;
 //cout << "정답은 " << googoo_nums[what_Num - 2][what_Num2 - 1] << "입니다." <<endl;

 //실습
 /*
 A~Z 키중 하나를 정답으로 설정한다.
 유저는 한 개의 키를 입력해서 설정된 값을 맞춘다.
 유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료
 틀리면 남은 기회를 보여주고,
 5번 틀리면 정답을 알려주고 게임오버

 + 틀릴 때마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에있는지 힌트를 준다.

 + 입력된 값이 대소문자 구분없이 처리될 수 있도로 수정 해보자.


 */
 //srand(time(NULL));
 //int Answer = (rand() % 25) + 97;
 //
 //cout << "미리보는 정답: " << (char)Answer << endl;
 //
 //for ( int death_Count = 5; death_Count > 0; death_Count--)
 //{
 //    
 //    cout << "A~Z 키중 하나를 누르세요: ";
 //    int What_key = _getch();
 //    
 //    if ( What_key < 97)
 //    {
 //        What_key += 32;            
 //    }
 //
 //
 //    if (What_key == Answer)
 //    {
 //        cout << "정답입니다, 수고하셨습니다.";
 //        exit(0);
 //    }
 //
 //    else if (What_key > Answer)
 //    {
 //        cout << "틀렸습니다."<< endl;
 //        cout << "남은 횟수:" << (death_Count-1) << endl;
 //        cout << "입렵된 값보다 뒤 \n";
 //    }
 //    else if (What_key < Answer)
 //    {
 //        cout << "틀렸습니다." << endl;
 //        cout << "남은 횟수: " << (death_Count - 1) << endl;
 //        cout << "입렵된 값보다 앞 \n";
 //    }
 //
 //
 //}
 //
 //cout << "정답은 : " << (char)Answer << "입니다.\n\n ";
 //
 //cout << "게임 오버";

 //-------- - 콘솔용 탈출게임--------------------------------------
 //10 * 10 크기의 맵을 구성한다. (2차원 배열)
 //플레이어(0, 0) 가 존재한다.
 //탈출지점이 존재한다.
 //WASD 키입력을 통해 플레이어를 이동시킨다.
 //탈출지점은(0, 0)을 제외하고 랜덤 설정
 //O가 E에 도달하면 "탈출에 성공했습니다."프로그램 종료
 //
 //
 //
 //##########
 //##########
 //##########
 //##########
 //##########
 //##########
 //##########
 //##########
 //##########
 //##########
 //
 // _getch()
 //system("cls"); //한번 초기화

    srand(time(NULL)); // 목적지 랜덤위치
    string map_sharp[10][10];// 맵 크기 [10,10]
    string player[1][1];
    string arive[10][10];
    int x;
    int y;
    do
    {
         
        arive[rand() % 10 ][rand() % 10] = "★";// 목적지 랜덤위치
        for (int y = 0; y < 10; y++)  // 맵 생성

        {

            for (int x = 0; x < 10; x++)
            {
                map_sharp[y][x] = '#';
            }

        }
        for (int y = 0; y < 10; y++)  // 맵 생성
        {
            for (int x = 0; x < 10; x++)
            {
                cout << map_sharp[y][x];
            }
            cout << "\n";
        }
        system("cls");
       
       
    } while (player[1][1] == arive[(rand() % 10)][(rand() % 10)]);
}

