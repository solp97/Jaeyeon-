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



*/



#include <iostream>
#include <string>
using namespace std;
int main()
{
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

    //구구단의 결과를 저장하는 2차원 배열을 하나 선언하고,
    //이중 for문을 이용홰서 배열 변수에 구구단의 결과값을 저장하고,
    //두 수를 입력받아서 적합한 결과값을 출력해보자

    int googoo_nums[8][9];
    int what_Num;
    int what_Num2;

    for (int i =0 ; i > 8; i++)
    {
        

        for (int j = 0; j > 9; j++)
        {

            googoo_nums[i][j] = (i + 2) * (j + 1);

        }
    }
    cout << "결과 저장 완료\n";
    cout << "몇단? :";
    cin >> what_Num;
    cout << "몇을 곱할? :";
    cin >> what_Num2;

    cout << "정답은 " << googoo_nums[what_Num][what_Num2] << "입니다.";

}