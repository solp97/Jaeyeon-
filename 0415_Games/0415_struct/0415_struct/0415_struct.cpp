// 0415_struct.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;
struct student
{
    string name;
    int age;
    string homeTown;
    int pride;
};

//name, age, korScore, rank라는

/*
구조체
    1.절차적
    2.구조적
    3.객체지향적
###추상화###
c언어에서 코드를 ㅅ추상화하는 데 사용되는 삼총사 : 배여르 구조체, 함수
추상화??? 실제 세계 (현상) 를 간략화 / 기호화/ 보편화 해서 표현한 것
코드에서 추상화가 필요한 이유 : 결국 코드는 사람이 짜는 것이기 때문에 다른사람이 코드를 해석하기 편리해야하고
다른사람이 인수인계 받아서 유지보수하기 편리해야  하고, 다른 사람들과 함께 공동으로 코드를 만들기 편리해야 하고

배열 : 속성이 동일한 여러 개의 데이터를 같은 이름과 순서를 지정한 연속된 번호로 서로 연관되어 있음을 표시함으로서 추상화함
변수명(숫자)

구조체 : 데이터(자료형)을 실제로 쓰이는 데이터끼리 묶어서 추상화
함수: 프로세스(코드)를 특징 기능 단위로 묶어서 추상화

최악의 추상화 -> 추상화 단계를 상승시키는 과정 
string a,b,c;(최악) string a[3]; (그나마 나음) string name, name2, name3; [나음]
string studentName[3]; => 의도가 명료하게 드러나기 떄문에 좋은 추상화
*/


/*
구조체 : 
    - 변수를 모아 놓은 집합체
    - 특정 변수들이 무언가의 하위 개념으로 묶일 수 있을 때
    = studentName [10], studentAge [10], studentKorScore[10]
    - '학생'의 "xxx"
    - 이름, 나이, 국어점수, 석차 등등을 '학생'이라는 구체로 묶어서 사용

1.구조체를 정의하는 위치: 구조체가 사용되는 함수의 앞에 정의한다.
    ( 해당 함수의 바깥쪽 앞(위))

2. 구초체 정의하는 방법
    struct 구조체 변수명
    {
        구조체 안에 들어갈 하위 변수들
    }

구조체는 일종의 우리가 새롭게 만든 데이터형

구조체 안에 들어갈 수 있는 하위변수는 무엇이 있을까?
당연히 int/bool,float 같은 기본 자료형들은 모두 사용 가능
string 같은 클래스도 사용 가능, array 배열도 사용 가능
앞에서 정의한 다른 구조체도 사용 가능

중괄호의 끝과 세미콜론 사이에 변수명을 적어두면 변수를 미리 선언해 줄 수도 있다.

3. 구조체의 선언과 초기화
    -기본적으로 구조체 변수의 개념은 배열 변수의 개념과 동일, 구조체
    // monster a  = {"고블린", 79, 44.24f, true, 100}
    구조체 변수도 다음과 같이 선언과 동시에 초기화할 수 있다.

    player.HP = player.HP - monster[n].dmg;
    <-

    
*/

/*
사용할 수 있는 모든 요소에 구조체를 활용해서 소스 코드를 개선
 tile : 지형 정보를 넣고 (숲, 늪, 평지)
 player : 피로도를 넣고
 플레이어가 어느 지형에 있는지, 플레이어의 피로도가 얼마인지 (숲 - 1, 늪 -3, 평지 0 )




*/

int main()
{
    student jaeYeon;
    jaeYeon.age = 26;
    jaeYeon.pride = 22;
    jaeYeon.homeTown = "김제";
    jaeYeon.name = "최재연";
    

    cout << jaeYeon.name << endl;
    cout << jaeYeon.homeTown << endl;
    cout << jaeYeon.pride << endl;
    cout << jaeYeon.age << endl;
}