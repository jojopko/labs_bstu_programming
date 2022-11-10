// Laboratory work on programming N9. Serezhkin Konstantin 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	18. Среди натуральных чисел из промежутка от А до В найти число с наименьшим произведением цифр.
	Вывести на экран это число и произведение его цифр. 
*/

int main(int argc, char ** argv) {
	unsigned int A, B, number, multy;
	unsigned int min = 4294967295u;

	printf_s("A = ");
	scanf_s("%u", &A);
	printf_s("B = ");
	scanf_s("%u", &B);

	for (unsigned int i = A; i < B; i++) {
		number = i;
		multy = 1;
		while (number > 0) {
			multy *= number % 10;
			number /= 10;
		}
		min = multy < min ? multy : min;
	}
	printf_s("%u\n", min);
	system("pause");
	system("cls");
	return 0;
}
