// Сережкин К.С. ЛР-7
#include <stdio.h>
#include <stdlib.h>

/*
Первый тип. 18
Дано число n. Составить алгоритм вывода всех натуральных
чисел, кратных n, меньше 100.
*/
void f1() {
	int n = 1;
	int r = 1;

	// Ввод данных
	printf_s("n = ");
	scanf_s("%d", &n);

	// Проверка входных данных
	if (n <= 0) {
		printf_s("Uncorrect input data. n <= 0.\n");
		return;
	}

	while (r < 100) {
		if (n % r == 0) {
			// Вывод чисел, кратных n и меньших чем 100.
			printf_s("%d\n", r);
		}
		r += 1;
	}
	system("pause");
	system("cls");
}

/*
Второй тип. 18
Дано целое положительное число. Определить произведение
цифр, стоящих на четных позициях.
*/

void f2() {
	unsigned int n;
	unsigned int r = 1;
	int i = 1;

	// Ввод исходных данных
	printf("n = ");
	scanf_s("%u", &n);

	if (n == 0) {
		r = 0;
	}
	
	while (n > 1) {
		if (i % 2 == 0) {
			// умножение r на остаток от деления 10 (нечетные)
			r *= (n % 10);
		}
		// переход к следующему порядку
		n /= 10;
		i++;
	}

	// Вывод
	printf("Result: %u\n", r);
	system("pause");
	system("cls");
}



int main(int argc, char ** argv) {
	//f1();
	f2();
	return 0;
}