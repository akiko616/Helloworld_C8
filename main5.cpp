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
		b = --a;   // ++�� --(����������)�� �տ����� �ڿ����Ŀ� ���� ����� �޶���
		cout << "a =" << a << "b = " << b << endl;
	}


	{
		int a = 10;
		int b = -5;
		bool result = false; // bool�� Ʈ���޽��� ���� 0,1�� ��Ÿ���� �Լ�
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
		cout << "2���� ǥ��: " << bitset<32>(num) << endl;
		cout << "8���� ǥ��: " << oct << num << endl;
		cout << "10���� ǥ��: " << dec << num << endl;
		cout << "16���� ǥ��: " << hex << num << endl;
		cout << bitset<32>(num) << endl;

		int x = 0x35;
		int y = 0xf0;
		cout << "x = " << bitset<8>(x) << endl;
		cout << "y = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; // �ٸ��� 1 ������ 0
		cout << "~x = " << bitset<8>(~x) << endl;

		int x1 = x << 2; // �ڸ����� ������ 2�ܰ� �о �Ҽ����� �ö���ڸ��� 0���� ä��
		cout << "x = " << bitset<8>(x) << endl;
		cout << "x1 = " << bitset<8>(x1) << endl;

		char cX = 0b10010100;
		cout << "cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << "cX = " << bitset<8>(cX) << endl;

	}
	{
	    //static_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ��
		//dynamic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		//reinterpret_cast : �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ��
		//const_cast : const ������ �Ͻ� ������

	double d = 10.5;
	int a = static_cast<int>(d);
    }
}
*/
