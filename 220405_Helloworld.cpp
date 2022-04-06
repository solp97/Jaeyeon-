// 220405_Helloworld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//주석 : 실행되지 않고 설명만을 위해 사용되는 문법
/*
       여러줄짜리
       주석을
       사용하고
       싶을 때      주석은 컴파일 x
         char	/1byte/	-127 to 127 or 0 to 255
         unsigned char	/1byte/	0 to 255
         signed char	/1byte/	-127 to 127
         int	/4bytes/	-2147483648 to 2147483647
         unsigned int	/4bytes/	0 to 4294967295
         signed int	/4bytes/	-2147483648 to 2147483647
         short int	/2bytes/	-32768 to 32767
         unsigned short int /2bytes/	0 to 65,535
         signed short int	/2bytes/	-32768 to 32767
         long int	/8bytes/	-2,147,483,648 to 2,147,483,647
         signed long int	/8bytes/	same as long int
         unsigned long int	/8bytes/	0 to 4,294,967,295
         long long int	/8bytes/	-(2^63) to (2^63)-1
         unsigned long long int	/8bytes/	0 to 18,446,744,073,709,551,615
         float	/4bytes/  1.175494351 E - 38  to 3.402823466 E + 38
         double	/8bytes/  2.2250738585072014 E - 308  to 1.7976931348623158 E + 308
         long double	/12bytes/ 2.22507e-308 max: 1.79769e+308
         wchar_t	/2 or 4 bytes/	1 wide character
*/
//라이브러리 : 자주쓰는 명령어

/* #include를 이용해서 다른 소스파일의 내용을 불러올 수 있다.
   iostream = input output stream
   #include "파일명.h"       <- c라이브러리 파일 포함,우리가 만든 소스파일을 포함 시킬 때
   #include <파일명>         <- c++라이브러리 파일 포함
   #include 를 사용하는 문법은 소스파일의 가장 상단에 위치해야 한다.(하향식)
*/

//#include "파일명.h"
//#include <fstream>

/*
       C++프로그래밍 언어가 가지는 표현적 특성
       1) 대,소문자를 구분하자.
       main, Main, mAIN, maIN, 전부 다르게 구분하여 컴파일함.

       2)띄어쓰기를 통해 각 요소를 구분한다.
       int num = 3;


       3) 실행문의 끝을 ;으로 마무리한다.
*/


#include <iostream>
#include <string>

using namespace std;

/*int main()
{
    // 변수 : 데이터를 저장하는 메모리공간에 붙여진 이름
    int num = 3;
    char a = 0;

    /*
         변수의속성
         1)이름(num)    2)값(3)   3)메모리주소(?)      4)크기(데이터타입 - int)
         short / int / long / long long : 정수형 변수를 저장하는 데이터타입.
         float(소수점 7자리까지) / double(소수점 15자리까지) / long double : 실수형 변수를 저장하는 데이터타입
         char : 문자형 변수를 저장하는 데이터타입
         ? : 문자열 변수를 저장하는 데이터타입
         문자열을 배열로 쓰는 형태 - string

    

    //본인 이름을 입력받아서 __님 환영합니다.
    
    
    
    cin >> a;
    std::string helloText = "Hello World!";
    string hi = "님 환영합니다";
    cout << helloText << std::endl;
    cout << a + hi << endl;

    cout << sizeof(helloText) << "Byte" << endl;

    std::cout << sizeof(a) << "Byte" << std::endl;

    unsigned short maxShortNum = USHRT_MAX;
    unsigned short minShortNum = 0;

    std::cout << maxShortNum << std::endl;
    std::cout << minShortNum << std::endl;
    std::cout << sizeof(short) << "Byte" << std::endl;
    std::cout << sizeof(minShortNum) << "Byte" << std::endl;

    std::cout << sizeof(int) << "Byte" << std::endl;
    std::cout << sizeof(long) << "Byte" << std::endl;
    std::cout << sizeof(__int64) << "Byte" << std::endl;

    


    std::cout << num << ". Hello World!\n\n\n\n\n\n\n\n";
    std::cout << "1. Hello World!\n";
    std::cout << "2. Hello World!\n";
    std::cout << "3. Hello World!\n";


}*/

int start()
{








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
