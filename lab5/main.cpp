#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
18. Даны два целых числа. Если первое число не больше второго,
	вычислить их сумму, в противном случае вычислить отношение
	первого ко второму.
*/
void f1() {
	double a, b;
	double result;

	// Ввод
	printf_s("a = ");
	scanf_s("%lf", &a);
	printf_s("b = ");
	scanf_s("%lf", &b);

	// ветление
	if (a < b) {
		result = a + b;
	}
	else {
		result = a / b;
	}

	// вывод
	printf_s("Result: %lf\n", result);
	system("pause");
	system("cls");
}

/*     
       / 4, x < -1
f(x) = | 6tg(x), -1 <= x <= 10
       \ 3/2x, x > 10
*/     
void f2_1() {
	double x, f;

	// Ввод
	printf_s("x = ");
	scanf_s("%lf", &x);

	// Ветление 
	if (x < -1) {
		f = 4;
	}
	else if (x >= -1 && x <= 10) {
		f = tan(x) * 6;
	}
	else {
		f = 3 / (2 * x);
	}

	// вывод
	printf_s("Result: %lf\n", f);
	system("pause");
	system("cls");
}
void f2_2() {
	double x, f;

	// Ввод
	printf_s("x = ");
	scanf_s("%lf", &x);

	// ветление
	if (x < -1) {
		f = 4;
	}
	if (x >= -1) {
		if (x <= 10) {
			f = tan(x) * 6;
		}
	} 
	if (x > 10) {
		f = 3 / (2 * x);
	}

	// Вывод
	printf_s("Result: %lf\n", f);
	system("pause");
	system("cls");
}

int main(int argc, char** argv) {
	//f1();
	f2_1();
	f2_2();
	return 0;
}