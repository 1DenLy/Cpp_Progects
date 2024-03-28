#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введіть розмір масиву b: ";
    cin >> n;

    int* b = new int[n]; 

    cout << "Введіть елементи для масиву b:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int countNonZero = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] != 0) {
            countNonZero++;
        }
    }

    int* C = new int[countNonZero]; 

    int index = 0; 
    for (int i = 0; i < n; i++) {
        if (b[i] != 0) {
            C[index++] = b[i] / 5;
        }
    }

    cout << "Масив C з ненульовими елементами масиву b, поділеними на 5:" << endl;
    for (int i = 0; i < countNonZero; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] b; 
    delete[] C; 

    return 0;
}
