

#include <iostream>

using namespace std;

int main()
{
	/*
	int Score = { 0 };
	cout << "������ ����?" << endl;
	cin >> Score;

	Score /= 10;

	switch (Score)
	{
	case 10:                     // case �� �ΰ����� �����ϰ������ ���̿� �극��ũ ���� �����
	case 9:
		cout << "A ����" << endl;
		break;
	case 8:
		cout << "B ����" << endl;
		break;
	case 7:
		cout << "C ����" << endl;
		break;
	case 6:
		cout << "D ����" << endl;
		break;
	case 5:
		cout << "E ����" << endl;
		break;
	default:
		cout << "F ����" << endl;
		break;
	}
		
	if (Score >= 90)
	{
		cout << "A ����" << endl;
	}
	else if(90 > Score && Score >= 80) // else ���� ���� if�� ������ �߰����ǽ��� ���� �� ����
	{
		cout << "B ����" << endl;
	}
	else if(80 > Score && Score>=70)
	{
		cout << "D ����" << endl;
	}
	else if (70 > Score && Score >= 60)
	{
		cout << "E ����" << endl;
	}
	else if (60 > Score && Score >= 50)
	{
		cout << "E ����" << endl;
	}
	else
	{
		cout << "F ����" << endl;
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
	cout << "���� �ϳ��� �Է� ?";
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
	cout << "�ֹι�ȣ ���ڸ� �Է� ?";
	cin >> a;

	a /= 1000000;

	switch(a)
	{
	case 0:
	case 1:
	case 3:
		cout << "����" << endl;
		break;
	case 2:
	case 4:
		cout << "����" << endl;
		break;
	default:
		cout << "�ܰ���" << endl;
		break;
	}

}
