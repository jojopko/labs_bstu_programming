#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../mydef.h"

/*
	6. Дано количество дней с начало года. 
	Вывести название дня недели, если первое января был понедельник.
*/
void f1() {
	int past_days_of_year;
	char day_of_week;
	
	// Ввод
	printf_s("past_days_of_year = ");
	scanf_s("%d", &past_days_of_year);

	// проверка ввода
	if (past_days_of_year < 0 || past_days_of_year > 366) {
		printf_s("Uncorrect input data!\n");
		return;
	}

	// Вычисление дня
	day_of_week = past_days_of_year % 7;

	// Вывод
	// system("chcp 1251 > NUL");
	printf_s("Result: ");
	switch (day_of_week) {
	case 0:
		printf_s("Понедельник\n");
		break;
	case 1:
		printf_s("Вторник\n");
		break;
	case 2:
		printf_s("Среда\n");
		break;
	case 3:
		printf_s("Четверг\n");
		break;
	case 4:
		printf_s("Пятница\n");
		break;
	case 5:
		printf_s("Суббота\n");
		break;
	case 6:
		printf_s("Воскресение\n");
		break;
	}
	system("chcp 866  > NUL");
	system("pause");
	system("cls");
}

/*
	6. Даны стороны пяти квадратов. Определить квадрат
	с самой длинной диагональю и вывести ее значение.
*/
void f2() {
	double side1, side2, side3, side4, side5;
	double max;
	double result;
	
	// Ввод
	printf_s("side1 = ");
	scanf_s("%lf", &side1);
	printf_s("side2 = ");
	scanf_s("%lf", &side2);
	printf_s("side3 = ");
	scanf_s("%lf", &side3);
	printf_s("side4 = ");
	scanf_s("%lf", &side4);
	printf_s("side5 = ");
	scanf_s("%lf", &side5);

	// получение большей стороны
	max = side1;

	if (side2 > max)
		max = side2;
	if (side3 > max)
		max = side3;
	if (side4 > max)
		max = side4;
	if (side5 > max)
		max = side5;

	// вычисление и вывод
	result = sqrt(2 * max * max);
	printf_s("Result: %lf\n", result);
	system("pause");
	system("cls");
}

int main(int argc, char** argv) {
	f1();
	f2();
	return 0;
}