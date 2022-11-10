// Сережкин Константин (Вариант 18).
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Задача №18 первого типа
void f1() {
	double S, S1, S2; // Расстояния между разными городами
	double V1, V2; // Скорости велосипеда из A в С; из C в B
	double stayTime, t; // Время, на которое он остановился; время затраченное на путь

	// Ввод необходимых данных
	printf("S = ");
	scanf("%lf", &S);
	printf("S1 = ");
	scanf("%lf", &S1);
	printf("V1 = ");
	scanf("%lf", &V1);
	printf("V2 = ");
	scanf("%lf", &V2);
	printf("t = ");
	scanf("%lf", &t);
	printf("Result: ");

	S2 = S - S1; // Вычисление расстояния из С в B
	stayTime = t - (S1 / V1) - (S2 / V2); // Вычисление результата (времени остановки)
	printf("%lf\n", stayTime); // Вывод
}

void f2() {
	struct vector {
		double x;
		double y;
	};
	// Вершины прямоугольника в виде вектора с x и y компонентами
	vector A, B, C, D;
	double AB, BC;
	double H, W;
	double SquareABCD;

	// Ввод данных пользователем
	printf("A[x y] = ");
	scanf("%lf %lf", &A.x, &A.y);
	printf("B[x y] = ");
	scanf("%lf %lf", &B.x, &B.y);
	printf("C[x y] = ");
	scanf("%lf %lf", &C.x, &C.y);
	printf("D[x y] = ");
	scanf("%lf %lf", &D.x, &D.y);
	printf("Result: ");
	
	// Вычисление длинны и ширины с проверкой
	if (A.y == B.y) {
		W = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
	}
	else if (A.y == C.y) {
		W = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
	}
	else {
		W = sqrt(pow(A.x - D.x, 2) + pow(A.y - D.y, 2));
	}

	if (A.x == B.x) {
		H = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
	}
	else if (A.x == C.x) {
		H = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
	}
	else {
		H = sqrt(pow(A.x - D.x, 2) + pow(A.y - D.y, 2));
	}

	// Вычисление площади и ее вывод
	SquareABCD = H * W;
	printf("%lf\n", SquareABCD);
}

void f3() {
	double x, y;
	double result;
	
	// Получение значений переменных
	printf("x = ");
	scanf("%lf", &x);
	printf("y = ");
	scanf("%lf", &y);
	printf("Result: ");
	
	// Проверка на область определения
	if (y < 0) {
		printf("Uncorrect input data!");
		return;
	}
	if (x < -sqrt(y)) {
		printf("Uncorrect input data!");
		return;
	}

	// Вычисление и вывод результата
	result = 3 * sqrt(pow(x, 2)) - 5 * sqrt(x + sqrt(y));
	printf("%lf", result);
}

int main(int argc, char** argv) {
	int n = 1;
	printf("Enter number (1-3): ");
	scanf("%d", &n); // Выбор программы
	if (n == 1) {
		f1(); // Задание 1
	}
	else if (n == 2) {
		f2(); // Задание 2
	}
	else if (n == 3) {
		f3(); // Задание 3
	}
	else {
		printf("Coming soon...");
	}
	system("pause");
}
