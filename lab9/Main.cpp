// Laboratory work on programming # 9. Serezhkin Konstantin 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 18. Вычислить значения выражений у для значений x, равных 1, 2, …, 20: y = 2t^2 + 2t + 2, t =1 + x.
void f1() {
	int y;
	int t;
	for (int x = 1; x <= 20; x++) {
		t = 1 + x;
		y = 2 * t * t + 2 * t + 2;
		printf_s("%d: %d\n", x, y);
	}
	system("pause");
	system("cls");
}

/*
	   / 4, x < -1
f(x) = | 6tg(x), -1 <= x <= 10
	   \ 3/2x, x > 10
*/
double f2_1(double x) {
	double f;

	// Ветление 
	if (x < -1) {
		f = 4;
	}
	else if (x <= 10) {
		f = tan(x) * 6;
	}
	else {
		f = 3 / (2 * x);
	}
	return f;
}

void f2() {
	double A, B, C;
	printf_s("A =");
	scanf_s("%lf", &A);
	printf_s("B =");
	scanf_s("%lf", &B);
	printf_s("C =");
	scanf_s("%lf", &C);

	for (double i = A; i <= B; i += C) {
		printf("f(%lf) = %lf\n", i, f2_1(i));
	}
	system("pause");
	system("cls");
}

int main(int agrc, char** argv) {
	f1();
	f2();
	return 0;
}
