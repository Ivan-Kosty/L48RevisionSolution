#include <iostream>
#include "logic.h"
using namespace std;
double calculateNonZeroAverage(int** matrix, int N, int M) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (matrix[i][j] != 0) {
                sum += matrix[i][j];
                count++;
            }
        }
    }

    if (count == 0) {
        return 0;
    }

 
    double average = sum;
    average /= count;

    return average;
}

