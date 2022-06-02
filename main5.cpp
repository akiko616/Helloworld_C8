/*
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++;
		//b = ++a;
		//b = a--;
		b = --a;   // ++나 --(증감연산자)가 앞에오냐 뒤에오냐에 따라 결과는 달라짐
		cout << "a =" << a << "b = " << b << endl;
	}


	{
		int a = 10;
		int b = -5;
		bool result = false; // bool은 트루펄스에 대해 0,1로 나타내는 함수
		result = (a > b) ? true : false;
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false;
		result = (a > 0 || b > 0) ? true : false;
		result = (a < 0 && --b > 0) ? true : false;
		result = !(a < 0) ? true : false;
		cout << "Result= " << boolalpha << result << noboolalpha << " b= " << b << endl;
	}

	{
		int num = 10;
		cout << "2진수 표기: " << bitset<32>(num) << endl;
		cout << "8진수 표기: " << oct << num << endl;
		cout << "10진수 표기: " << dec << num << endl;
		cout << "16진수 표기: " << hex << num << endl;
		cout << bitset<32>(num) << endl;

		int x = 0x35;
		int y = 0xf0;
		cout << "x = " << bitset<8>(x) << endl;
		cout << "y = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; // 다르면 1 같으면 0
		cout << "~x = " << bitset<8>(~x) << endl;

		int x1 = x << 2; // 자리수를 앞으로 2단계 밀어냄 소수에서 올라온자리는 0으로 채움
		cout << "x = " << bitset<8>(x) << endl;
		cout << "x1 = " << bitset<8>(x1) << endl;

		char cX = 0b10010100;
		cout << "cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << "cX = " << bitset<8>(cX) << endl;

	}
	{
	    //static_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 때 수식에 지정된 그대로 변환함
		//dynamic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함
		//reinterpret_cast : 포인터를 다름 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함
		//const_cast : const 지정을 일시 해제함

	double d = 10.5;
	int a = static_cast<int>(d);
    }
}
*/

