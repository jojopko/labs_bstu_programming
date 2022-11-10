// Сережкин Константин
#include <stdio.h>
#include <math.h>

/*
18. С начала суток прошло N секунд (N – целое). Определить
количество секунд, прошедших с начала последней минуты
*/
void f1() {
	int n, r;

	// Ввод данных
	printf_s("N = ");
	scanf_s("%d", &n);

	// Проверка
	if (n < 0) {
		printf_s("Uncorrect input data");
		return;
	}

	r = n % 60;
	printf_s("Result: %d\n", r);
}

/*
18. Дано семизначное число. Определить на сколько сумма
цифр, стоящих на нечетных позициях, меньше самого числа.
*/
void f2() {
	int n, result;
	char n1, n2, n3, n4, n5, n6, n7;

	// Ввод данных
	printf_s("Enter number: ");
	scanf_s("%d", &n);

	// Проверка семизначного числа
	if (n < 1000000 || n > 9999999) {
		printf_s("Uncorrect input data");
		return;
	}

	// Вычисление цифр цисла
	n1 = (n / 1000000) % 10; // e06
	//n2 = (n / 100000) % 10; // e05
	n3 = (n / 10000) % 10; // e04
	//n4 = (n / 1000) % 10; // e03
	n5 = (n / 100) % 10; // e02
	//n6 = (n / 10) % 10; // e01
	n7 = n % 10;       // e00

	// Вычисление и вывод результата
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
