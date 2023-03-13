#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

constexpr const char* roma = "IVXLCDM"; //���ڿ��� roma���� �� �� �ε��� ���� ���ڷ� �߶� ��������
constexpr int number[] = { 1, 5, 10, 50, 100,500, 1000 };

int numToNum(const char ch)
{
	for (int i = 0; i < 8; i++)
	{
		if (roma[i] == ch) {
			return number[i];
		}
	}
	return -1;
}

int main()
{
	//�θ����ڸ� �ƶ� ���ڷ� ǥ���ϴ� �ڵ�
	char str[100]; // �θ� ���ڸ� ������ ����
	int num = 0; // �������� 1��,2������ ���� �Է� ���� ����

	// ���� �θ����ڷ� ��ȭ�ϴ� �ڵ�
	int num2, thous, hund, ten, one; // ���� �θ� ���ڷ� ��ȯ�ϱ� ���� õ,��,��,�� ������ ������� ����
	int i; // �ݺ����� ���̴� ����

	while (true) {
		cout << '\n' << "1�� : �ƶ� ���ڸ� �θ� ���ڷ� ��ȯ 2�� : �θ� ���ڸ� �ƶ� ���ڷ� ��ȯ(���� : ESC)" << '\n';
		num = _getch();
		if (num == 27) {
			cout << '\n' << "����Ǿ����ϴ�." << '\n';
			break;
		}
		else if (num == 50) { // 2�϶�

			cout << '\n' << "1 ~ 3999������ �θ� ���ڸ� �Է��Ͻÿ�." << '\n';
			gets_s(str, sizeof(str));
			num = 0;
			for (int j = 0; str[j]; j++) {
				num += numToNum(str[j]);
			}
			if (num < 0 || num > 3999) {
				cout << '\n' << "���� �ȿ� �ִ� ���� �ƴմϴ�." << '\n';
				num = 0;
			}
			else {
				cout << num;
				num = 0;
			}
		}
		else if (num == 49) { // 1�ϋ�
			num = 0;
			cout << '\n' << "1 ~ 3999������ �ƶ� ���� �� �Է��Ͻÿ�." << '\n';
			cin >> num;

			if (num > 0 && num <= 3999) {
				thous = num / 1000;
				hund = (num % 1000) / 100;
				ten = (num % 100) / 10;
				one = (num % 10);

				for (i = 0; i < thous; i++) {
					cout << "M";
				}
				if (hund < 4)
					for (i = 0; i < hund; i++) {
						cout << "C";
					}
				else if (hund == 4) {
					cout << "CD";
				}
				else if (hund >= 5 && hund < 9) {
					cout << "D";
					for (int i = 0; i < (hund - 5); i++) {
						cout << "C";
					}
				}
				else cout << "CM";

				if (ten < 4)
					for (i = 0; i < ten; i++)
						cout << "X";
				else if (ten == 4)
					cout << "XL";
				else if (ten >= 5 && ten < 9)
				{
					cout << "L";
					for (i = 0; i < (ten - 5); i++)
						cout << "X";
				}
				else cout << "XC";

				if (one < 4)
					for (i = 0; i < one; i++)
						cout << "I";
				else if (one == 4)
					cout << "IV";
				else if (one >= 5 && one < 9)
				{
					cout << "V";
					for (i = 0; i < (one - 5); i++)
						cout << "I";
				}
				else cout << "IX";
			}
			else {
				cout << '\n' << "���� �ȿ� �ִ� ���� �ƴմϴ�." << '\n';
				continue;
			}
			num = 0;
		}
	}
}
