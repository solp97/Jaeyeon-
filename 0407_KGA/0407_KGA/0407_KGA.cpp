// 0407_KGA.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    /*

        연산자
        데이터를 가공(연산)하는 모든 명령에 필요한 것들
        1) 어떤 종류의 연산자들이 있는지?
        2) 우선 순위 : 어떤 순서로 연산이 진행되는지?
        3) 결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자


        1.사칙연산 : 산술연산자 (좌측부터 연산) * , /, % > +, - 순으로
        + : 더하기
        - : 뺴기
        * : 곱하기
        / : 나누기 11 / 3 = 3
        % : 나머지 11 % 3 = 2

        2. 대입연산자
        = : 왼쪽 항에 오른쪽 항의 값을 대입한다. (복사한다)


        3. 복합대입연산자

        += : a += b -> a = a + b;
        -= : a -= b -> a = a - b;
        *= : a *= b -> a = a * b;
        /= : a /= b -> a = a / b;
        %= : a %= b -> a = a % b; (a와 b는 정수형 타입이어야한다.)

        4. 증감연산자
       특정 변수의 값을 1씩 증가시키거나 감소시킬 떄 사용한다.
       변수의 앞이나뒤에 ++/--를 어서 사용한다.

        5. 관계연산자
        두 값을 비교한 결과가 참인지(1, true) 거짓(0,false)인지 반환하는 연산자

        < : a < b (a가 b보다 작다):왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
        > : a > b (a가 b보다 크다):왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
        > : a > b (a가 b보다 크다)
        == : a == b (a와 b는 같다)
        <= : a <= b (a가 b보다 작거나 같다)
        >= : a >= b (a가 b보다 크거나 같다)


        고객의 나이를 입력받아서 미성년자 이면 False를 성인이면 True 출력.
        주민등록증 발급대상이면 True 아니면 False

        + 아홉수(1의자리가 9인수) 인지 확인해서 true, false 출력

    */

    /*int left_Value = 11;

    cout << "++" << (++left_Value) << endl;
    cout << "--" << (--left_Value) << endl;

    int right_Value = 3;


    cout << "+ :" << left_Value + right_Value << endl;
    cout << "- :" << left_Value - right_Value << endl;
    cout << "* :" << left_Value * right_Value << endl;
    cout << "/ :" << left_Value / right_Value << endl;
    cout << "% :" << left_Value % right_Value << endl;

    left_Value += right_Value;
    cout << "+= :" << left_Value << endl;
        

    left_Value -= right_Value;
    cout << "-= :" << left_Value << endl;



    
    cout << "*= :" << (left_Value *= right_Value) << endl;


    left_Value /= right_Value;
    cout << "/= :" << left_Value << endl;


    left_Value %= right_Value;
    cout << "%= :" << left_Value << endl;*/

    /*int age;

    cout << "나이를 입력: ";
    cin >> age;
    
    if (age > 19)
        cout << "성인 True\n\n";
    if (age <= 19)
        cout << "성인이 아님 False\n\n";
    if (age == 20)
        cout << "주민등록증 발급대상 True\n\n";
    if (age <= 19)
        cout << "주민등록증 발급대상 False\n\n";
    if ((age % 10) == 9)
        cout << "아홉수 True\n\n";
    if ((age %10) != 9)
        cout << "아홉수 False\n\n";
    cout << boolalpha <<(age < 55);*/



}