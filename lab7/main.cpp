// Laboratory work #7. Serezhkin Konstantin
#include <stdio.h>
#include <stdlib.h>
#include "../mydef.h"

/*
	18. Дано число n. Составить алгоритм вывода всех натуральных
	чисел, кратных n, меньше 100.
*/
void f1() {
	int n = 1;
	int r = 1;

	// Ввод
	printf_s("n = ");
	scanf_s("%d", &n);

	// Проверка
	if (n <= 0) {
		printf_s("Uncorrect input data. n <= 0.\n");
		return;
	}

	while (r < 100) {
		if (n % r == 0) {
			printf_s("%d\n", r);
		}
		r += 1;
	}
	system("pause");
	system("cls");
}

/*
18. Дано целое положительное число. Определить произведение
цифр, стоящих на четных позициях.
*/
void f2() {
	unsigned int n;
	unsigned int r = 1;
	int i = 1;

	// Ввод
	printf("n = ");
	scanf_s("%u", &n);

	if (n == 0) {
		r = 0;
	}
	
	while (n > 1) {
		if (i % 2 == 0) {
			r *= (n % 10);
		}
		n /= 10;
		i++;
	}

	printf("Result: %u\n", r);
	getc(stdin);
}

int main(int argc, char ** argv) {
	//f1();
	f2();
	return 0;
}
