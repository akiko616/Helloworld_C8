

#include <iostream>

using namespace std;

int main()
{
	/*
	int Score = { 0 };
	cout << "점수는 몇점?" << endl;
	cin >> Score;

	Score /= 10;

	switch (Score)
	{
	case 10:                     // case 를 두가지를 접목하고싶으면 사이에 브레이크 등을 빼면됨
	case 9:
		cout << "A 학점" << endl;
		break;
	case 8:
		cout << "B 학점" << endl;
		break;
	case 7:
		cout << "C 학점" << endl;
		break;
	case 6:
		cout << "D 학점" << endl;
		break;
	case 5:
		cout << "E 학점" << endl;
		break;
	default:
		cout << "F 학점" << endl;
		break;
	}
		
	if (Score >= 90)
	{
		cout << "A 학점" << endl;
	}
	else if(90 > Score && Score >= 80) // else 구문 옆에 if를 넣으면 추가조건식을 넣을 수 있음
	{
		cout << "B 학점" << endl;
	}
	else if(80 > Score && Score>=70)
	{
		cout << "D 학점" << endl;
	}
	else if (70 > Score && Score >= 60)
	{
		cout << "E 학점" << endl;
	}
	else if (60 > Score && Score >= 50)
	{
		cout << "E 학점" << endl;
	}
	else
	{
		cout << "F 학점" << endl;
	}
	

	int a, b = { 0 };

	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	bool result = (a - b > 0);

	switch (result)
	{
		case true:
		cout << "true" << endl;
		break;
		default:
		cout << "false" << endl;
		break;
	}
	
	{
		int a, b, c = { 0 };
		cout << "A is ?";
		cin >> a;
		cout << "B is ?";
		cin >> b;
		cout << "C is ?";
		cin >> c;

		bool result = (a + b > c);

		switch (result)
		{
		case true:
			cout << a + b << endl;
		default:
			cout << c << endl;
		}
	}
	

	int a = { 0 };
	cout << "숫자 하나를 입력 ?";
	cin >> a;
	
	switch (a)
	{
	case 1:
		cout << "Red" << endl;
		break;
	case 2:
		cout << "Blue" << endl;
		break;
	case 3:
		cout << "Black" << endl;
		break;
	case 4:
		cout << "White" << endl;
		break;
	}
	*/
	
	int a = { 0 };
	cout << "주민번호 뒷자리 입력 ?";
	cin >> a;

	a /= 1000000;

	switch(a)
	{
	case 0:
	case 1:
	case 3:
		cout << "남자" << endl;
		break;
	case 2:
	case 4:
		cout << "여자" << endl;
		break;
	default:
		cout << "외계인" << endl;
		break;
	}

}
