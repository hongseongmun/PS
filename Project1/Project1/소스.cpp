#include <stdio.h>
#include <iostream>

using namespace std;

constexpr const char* symbol = "0IVXLCDM"; 
constexpr int values[] = {0, 1, 4, 5, 9, 10, 50, 90, 100,400, 500, 900,1000 };

int numToNum(const char ch)
{
	for (int i = 0; i < 8; i++)
	{
		if (symbol[i] == ch) {
			return values[i];
		}
	}
	return -1;
}

int main() {
	//�θ����ڸ� �ƶ� ���ڷ� ǥ���ϴ� �ڵ�
	char str[100];
	
	while (true) {
		cout << '\n' << "1 ~ 3999������ �θ� ���� �Է��Ͻÿ�(����� 0 �Դϴ�)" << '\n';
		cin >> str;

		int k;

		for (int j = 0; str[j]; j++) {
			k = numToNum(str[j]);
		}
		if (k > 0 && k <= 3999) {
			cout << k;
		}
		else if (k == 0) {
			break;
		}
		else continue;

	}



	// ���� �θ����ڷ� ��ȭ�ϴ� �ڵ�
	//int num, thous, hund, ten, one;
	//int i;

	//while (true)
	//{
	//	cout << '\n' << "1 ~ 3999������ ���� �Է��Ͻÿ�(����� 0 �Դϴ�)" << '\n';

	//	cin >> num;

	//	if (num > 0 && num <= 3999) {
	//		thous = num / 1000;
	//		hund = (num % 1000) / 100;
	//		ten = (num % 100) / 10;
	//		one = (num % 10);

	//		for (i = 0; i < thous; i++) {
	//			cout << "M";
	//		}
	//		if (hund < 4)
	//			for (i = 0; i < hund; i++) {
	//				cout << "C";
	//			}
	//		else if (hund == 4) {
	//			cout << "CD";
	//		}
	//		else if (hund >= 5 && hund < 9) {
	//			cout << "D";
	//			for (int i = 0; i < (hund - 5); i++) {
	//				cout << "C";
	//			}
	//		}
	//		else cout << "CM";

	//		if (ten < 4)
	//			for (i = 0; i < ten; i++)
	//				cout << "X";
	//		else if (ten == 4)
	//			cout << "XL";
	//		else if (ten >= 5 && ten < 9)
	//		{
	//			cout << "L";
	//			for (i = 0; i < (ten - 5); i++)
	//				cout << "X";
	//		}
	//		else cout << "XC";

	//		if (one < 4)
	//			for (i = 0; i < one; i++)
	//				cout << "I";
	//		else if (one == 4)
	//			cout << "IV";
	//		else if (one >= 5 && one < 9)
	//		{
	//			cout << "V";
	//			for (i = 0; i < (one - 5); i++)
	//				cout << "I";
	//		}
	//		else cout << "IX";
	//	}
	//	else if (num == 0) {
	//		break;
	//	}
	//	else {
	//		cout <<'\n' << "���� �� ���� �ƴմϴ�."<< '\n';
	//		continue;
	//	}
	//}
	//return 0;
}