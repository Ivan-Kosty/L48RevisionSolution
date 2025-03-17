#include <iostream>
#include "logic.h"
using namespace std;
int test01() {
	int N = 2;
	int M = 3;

	int** matrix = new int* [N];
	for (int i = 0; i < N; ++i) {
		matrix[i] = new int[M];
	}

	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[0][2] = 3;
	matrix[1][0] = 7;
	matrix[1][1] = 8;
	matrix[1][2] = 9;

	double average = calculateNonZeroAverage(matrix, N, M);
	double expected = 5.0;
	cout << "The arithmetic mean of non - zero elements: " << average << endl;
	cout << "Expected arithmetic mean of non - zero elements: " << expected << endl << endl;
	for (int i = 0; i < N; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
	if (expected == average) {
		cout << "Test01 Succesful!" << endl << endl;
	}
	else {
		cout << "Test01 WRONG!" << endl << endl;
	}
	return 0;
}
int test02() {
	int N = 3;
	int M = 2;

	int** matrix = new int* [N];
	for (int i = 0; i < N; ++i) {
		matrix[i] = new int[M];
	}

	matrix[0][0] = 1;
	matrix[0][1] = 0;
	matrix[1][0] = 1;
	matrix[1][1] = 1;
	matrix[2][0] = 0;
	matrix[2][1] = 1;

	double average = calculateNonZeroAverage(matrix, N, M);
	double expected = 1.0;
	cout << "The arithmetic mean of non - zero elements: " << average << endl;
	cout << "Expected arithmetic mean of non - zero elements: " << expected << endl << endl;
	for (int i = 0; i < N; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
	if (expected == average) {
		cout << "Test02 Succesful!" << endl << endl;
	}
	else {
		cout << "Test02 WRONG!" << endl << endl;
	}
	return 0;
}
int test03() {
	int N = 3;
	int M = 4;

	int** matrix = new int* [N];
	for (int i = 0; i < N; ++i) {
		matrix[i] = new int[M];
	}

	matrix[0][0] = 1;
	matrix[0][1] = 0;
	matrix[0][2] = 2;
	matrix[0][3] = 2;
	matrix[1][0] = 1;
	matrix[1][1] = 3;
	matrix[1][2] = 0;
	matrix[1][3] = 6;
	matrix[2][0] = 2;
	matrix[2][1] = 1;
	matrix[2][2] = 8;
	matrix[2][3] = 9;

	double average = calculateNonZeroAverage(matrix, N, M);
	double expected = 3.5;
	cout << "The arithmetic mean of non - zero elements: " << average << endl;
	cout << "Expected arithmetic mean of non - zero elements: " << expected << endl << endl;
	for (int i = 0; i < N; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;
	if (expected == average) {
		cout << "Test03 Succesful!" << endl << endl;
	}
	else {
		cout << "Test03 WRONG!" << endl << endl;
	}
	return 0;
}