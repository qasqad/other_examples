#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "main.h"
#include <iostream> 
//#include<sys\time.h>
#include <ctime>
using namespace std;


#define M 4

double MA[M][M + 1], V[M];

int main()
{
	setlocale(LC_ALL, "");
	int i, j, p;
	double a;
	//struct timeval tv_start, tv_end;

	clock_t t0 = clock();


	cout << "\nМатрица коэффициентов:\n";
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			if (i == j)
				MA[i][j] = 2.0;
			else
				MA[i][j] = 1.0;

			cout << MA[i][j] << " ";

		}
		cout << endl;
	}


	cout << "\nСгенерированные значения х:\n";
	for (j = 0; j < M; j++) {
		V[j] = -(double)(j + 1) / 2.;
		cout << V[j] << " ";

	}
	cout << endl;

	cout << "\nСвободные члены (b):\n";
	for (i = 0; i < M; i++) {
		MA[i][M] = 0.0;
		for (j = 0; j < M; j++) {
			MA[i][M] += MA[i][j] * V[j];
			cout << MA[i][M] << " ";
		}
		cout << endl;
	}


	/* Прямой ход */
	for (p = 0; p < M; p++) {
		a = MA[p][p];
		for (i = p; i <= M; i++)
			MA[p][i] = MA[p][i] / a;

		/* Цикл k - цикл по строкам. */
#pragma omp parallel for private (i, j, a)
		for (j = p + 1; j < M; j++) {
			a = MA[j][p];
			for (i = p; i <= M; i++)
				MA[j][i] = MA[j][i] - a * MA[p][i];
		}
	}

	/* Обратный ход */
	for (p = M - 1; p >= 0; p--) {
#pragma omp parallel for private (i, j)
		for (j = p - 1; j >= 0; j--) {
			for (i = M; i > j; i--)
				MA[j][i] = MA[j][i] - MA[j][p] * MA[p][i];
		}
	}
	clock_t t1 = clock();

	cout << "\nВычисленные значения х:\n";
	for (j = 0; j < M; j++) {
		cout << MA[j][M] << " ";
	}
	cout << endl;

	cout << "\nВремя прямого хода: " << (double)(t1 - t0) / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}


