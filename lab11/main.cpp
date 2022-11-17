// Laboratory work on programming N11. Serezhkin Konstantin 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//              -i   1-x
// Σ(n;i=1) (-1)    -----
//                   i+1
void f1() {
	int n, step = 1;
	double x, sum = 0;

	// input
	printf_s("n = ");
	scanf_s("%d", &n);
	printf_s("x = ");
	scanf_s("%lf", &x);

	for (int i = 1; i <= n; i++) {
		step *= -1;
		sum += step * (1 - x) / (i + 1);
	}

	printf_s("%lf", sum);
}

void f2() {

}

int main(int argc, char ** argv) {
	f1();
}
