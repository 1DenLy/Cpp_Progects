#include <iostream>

using namespace std;


// Функція для збільшення значення змінної 'a' в 2 рази, якщо 'a' > 'b', інакше зменшення 'b' у 2 рази
void modifyValues(int* a, int* b) {
    if (*a > *b) {
        *a *= 2;
    } else {
        *b /= 2;
    }
}


// Функція для підрахунку кількості входжень другого елементу масиву 'x' в масив 'y'
int countOccurrences(int* xArr, int sizeX, int* yArr, int sizeY) {
    int count = 0;
    for (int i = 0; i < sizeX; i++) {
        if (xArr[i] == yArr[1]) {  
            count++;
        }
    }
    return count;
}


// Функція для переписування ненульових елементів масиву 'b', які діляться на 5, в масив 'C'
void copyNonZero(int* bArr, int sizeB, int* cArr, int& sizeC) {
    sizeC = 0;  
    for (int i = 0; i < sizeB; i++) {
        if (bArr[i] != 0 && bArr[i] % 5 == 0) {
            cArr[sizeC++] = bArr[i];  
        }
    }
}


// Функція для знаходження добутку елементів стовпчика, де розташований максимальний елемент матриці
int productOfColumnWithMaxElement(int** matrix, int size) {
    int maxElement = matrix[0][0];
    int maxColumnProduct = 1;
    int maxColumnIndex = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxColumnIndex = j;
            }
        }
    }

  
    for (int i = 0; i < size; i++) {
        maxColumnProduct *= matrix[i][maxColumnIndex];
    }

    return maxColumnProduct;
}

int main() {

    
    int a = 10, b = 5;
    modifyValues(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    int x[] = {1, 2, 3, 4, 5};
    int y[] = {6, 5, 4, 3, 2};
    int occurrences = countOccurrences(x, 5, y, 5);
    cout << "Кількість входжень елементу x у масив y: " << occurrences << endl;

    int bArray[] = {0, 10, 15, 20, 25};
    int CArray[5];
    int sizeC;
    copyNonZero(bArray, 5, CArray, sizeC);
    cout << "Ненульові елементи, які діляться на 5, у масиві b: ";
    for (int i = 0; i < sizeC; i++) {
        cout << CArray[i] << " ";
    }
    cout << endl;


    int n = 3;
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;

    
    int product = productOfColumnWithMaxElement(matrix, n);
    cout << "Добуток елементів стовпчика, де розташований максимальний елемент: " << product << endl;


    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
