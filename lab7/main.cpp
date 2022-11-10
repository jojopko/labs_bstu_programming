// �������� �.�. ��-7
#include <stdio.h>
#include <stdlib.h>

/*
������ ���. 18
���� ����� n. ��������� �������� ������ ���� �����������
�����, ������� n, ������ 100.
*/
void f1() {
	int n = 1;
	int r = 1;

	// ���� ������
	printf_s("n = ");
	scanf_s("%d", &n);

	// �������� ������� ������
	if (n <= 0) {
		printf_s("Uncorrect input data. n <= 0.\n");
		return;
	}

	while (r < 100) {
		if (n % r == 0) {
			// ����� �����, ������� n � ������� ��� 100.
			printf_s("%d\n", r);
		}
		r += 1;
	}
	system("pause");
	system("cls");
}

/*
������ ���. 18
���� ����� ������������� �����. ���������� ������������
����, ������� �� ������ ��������.
*/

void f2() {
	unsigned int n;
	unsigned int r = 1;
	int i = 1;

	// ���� �������� ������
	printf("n = ");
	scanf_s("%u", &n);

	if (n == 0) {
		r = 0;
	}
	
	while (n > 1) {
		if (i % 2 == 0) {
			// ��������� r �� ������� �� ������� 10 (��������)
			r *= (n % 10);
		}
		// ������� � ���������� �������
		n /= 10;
		i++;
	}

	// �����
	printf("Result: %u\n", r);
	system("pause");
	system("cls");
}



int main(int argc, char ** argv) {
	//f1();
	f2();
	return 0;
}