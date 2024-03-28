#include <iostream>

using namespace std;

int countNonZeroElements(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Введіть розмір масивів: ";
    cin >> n;

    int* p = new int[n]; 
    int* q = new int[n]; 
  
    cout << "Введіть елементи для масиву p:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    cout << "Введіть елементи для масиву q:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    int nonZeroCountP = countNonZeroElements(p, n);
    int nonZeroCountQ = countNonZeroElements(q, n);

    if (nonZeroCountP > nonZeroCountQ) {
        cout << "У масиві p більше ненульових елементів." << endl;
    } else if (nonZeroCountQ > nonZeroCountP) {
        cout << "У масиві q більше ненульових елементів." << endl;
    } else {
        cout << "Кількість ненульових елементів у масивах p та q однакова." << endl;
    }

    delete[] p; 
    delete[] q; 

    return 0;
}
