#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MATRIX_SIZE = 3;

void generateRandomMatrix(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {
    srand(time(nullptr));
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            matrix[i][j] = rand() % 10; 
        }
    }
}

void printMatrix(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    generateRandomMatrix(matrix);
    cout << "Згенерована матриця:" << endl;
    printMatrix(matrix);

    int sumDiagonal = 0;
    int sumCenterColumn = 0;

    for (int i = 0; i < MATRIX_SIZE; i++) {
        sumDiagonal += matrix[i][i];
        sumCenterColumn += matrix[i][MATRIX_SIZE / 2]; 
    }

    sumCenterColumn = sumCenterColumn - ( matrix[MATRIX_SIZE / 2][MATRIX_SIZE / 2] );

    cout << "Сума елементів: " << sumDiagonal + sumCenterColumn << endl;

    return 0;
}
