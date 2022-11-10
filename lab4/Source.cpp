// �������� ����������
#include <stdio.h>
#include <math.h>

/*
18. � ������ ����� ������ N ������ (N � �����). ����������
���������� ������, ��������� � ������ ��������� ������
*/
void f1() {
	int n, r;

	// ���� ������
	printf_s("N = ");
	scanf_s("%d", &n);

	// ��������
	if (n < 0) {
		printf_s("Uncorrect input data");
		return;
	}

	r = n % 60;
	printf_s("Result: %d\n", r);
}

/*
18. ���� ����������� �����. ���������� �� ������� �����
����, ������� �� �������� ��������, ������ ������ �����.
*/
void f2() {
	int n, result;
	char n1, n2, n3, n4, n5, n6, n7;

	// ���� ������
	printf_s("Enter number: ");
	scanf_s("%d", &n);

	// �������� ������������ �����
	if (n < 1000000 || n > 9999999) {
		printf_s("Uncorrect input data");
		return;
	}

	// ���������� ���� �����
	n1 = (n / 1000000) % 10; // e06
	//n2 = (n / 100000) % 10; // e05
	n3 = (n / 10000) % 10; // e04
	//n4 = (n / 1000) % 10; // e03
	n5 = (n / 100) % 10; // e02
	//n6 = (n / 10) % 10; // e01
	n7 = n % 10;       // e00

	// ���������� � ����� ����������
	int a = n1 + n3 + n5 + n7;
	result = n - a;
	printf_s("Result: %d\n", result);

	// x = 123456789
	// y = x
}

int main(int argc, char ** argv) {
	f1();
	f2();
	return 0;
}
