#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int n;
    cout << "Введіть розмірність квадратної матриці: ";
    cin >> n;

    int** matrix = new int*[n]; 

    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100; 
        }
    }

    int maxElement = matrix[0][0];
    int maxColumn = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxColumn = j;
            }
        }
    }

    // добуток елементів стовпчика 
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= matrix[i][maxColumn];
    }

    cout << "Матриця  " << n << " x " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Добуток: " << product << endl;

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
