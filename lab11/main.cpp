// Laboratory work on programming N11. Serezhkin Konstantin 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// вычисление частичной суммы ряда
// 
//  n      -i   1-x
// Σ   (-1)    -----
//  i=1         i+1
// 
void f1() {
	int n, st = 1;
	double x, sum = 0;

	// input
	printf_s("n = ");
	scanf_s("%d", &n);
	printf_s("x = ");
	scanf_s("%lf", &x);

	for (int i = 1; i <= n; i++) {
		st *= -1;
		sum += st * (1 - x) / (i + 1);
	}

	printf_s("%lf", sum);
}

// приближённое вычисление суммы ряда
// 
//                  i
//  ∞     i  |cos(2x )|
// Σ  (-1)  ------------
//  i=1          xi
//              
double pow(double n, int x) {
	double result = 1;
	for (; x > 0; x--) {
		result *= n;
	}
	return result;
}

double f2(double x, double exactness) {
	int i = 1;
	double factorial = 1, sum = 0, iter_val;
	do {
		iter_val = pow(-1, i) * fabs(cos(2 * pow(x, i))) / pow(3, x * i);
		sum += iter_val;
		i++;
		factorial *= i;
	} while (fabs(iter_val) > exactness);
	return sum;
}

int main(int argc, char ** argv) {
	//f1();


	double x, e;
	printf_s("x = ");
	scanf_s("%lf", &x);
	printf_s("e = ");
	scanf_s("%lf", &e);


	printf_s("%lf\n", f2(x, e));
	return 1;
}
