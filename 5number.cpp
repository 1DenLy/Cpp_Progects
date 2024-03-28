#include <iostream>
#include <cstdlib> 

using namespace std;

void deleteColumn(int** matrix, int rows, int cols, int K) {
    for (int i = 0; i < rows; i++) {
        for (int j = K - 1; j < cols - 1; j++) {
            matrix[i][j] = matrix[i][j + 1];
        }
    }
}

int main() {
    int rows, cols, K;
    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100; 
        }
    }

    cout << "Введіть номер стовпця для видалення (від 1 до " << cols << "): ";
    cin >> K;

    if (K < 1 || K > cols) {
        cout << "Неправильний номер стовпця!";
        return 1;
    }

    deleteColumn(matrix, rows, cols, K);

    cout << "Матриця після видалення стовпця " << K << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
