// Laboratory work #8. Serezhkin Konstantin
#include <stdio.h>
#include "../mydef.h"

/*
	18. Написать программу, которая определяет, количество чисел,
	больших N (N вводится с клавиатуры в начале), среди введённых
	пользователем. Ввод данных продолжать до тех пор, пока
	пользователь не введет 0
*/
void f1() {
	double N = -999999999999;
	double n;
	int count = 0;

	// ввод N
	printf("N = ");
	scanf_s("%lf", &N);
	// подсчет
	do {
		scanf_s("%lf", &n);
		if (n > N) {
			count++;
		}
	} while (n != 0);

	printf_s("Result: %d\n", count);
}

/*
	18. Дано целое положительное число. Определить произведение
	цифр, стоящих на четных позициях.
*/
void f2() {
	int n;
	int r = 1;
	int i = 1;

	// Ввод
	do {
		printf("n = ");
		scanf_s("%d", &n);
	} while (n < 0);

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
}

int main(int argc, char** argv) {
	//f1();
	f2();
}
