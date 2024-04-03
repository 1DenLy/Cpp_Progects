#include <iostream>
#include <cmath>

using namespace std;

void sieveOfEratosthenes(int size) {
    bool primes[size + 1];
    fill_n(primes, size + 1, true);

    for (int p = 2; p * p <= size; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= size; i += p) {
                primes[i] = false;
            }
        }
    }

    cout << "Прості числа з діапазону 2 до " << size << " через одне число: ";
    for (int i = 2; i <= size; i++) {
        if (primes[i]) {
            cout << i << " ";
            i++; 
        }
    }
    cout << endl;
}

void sieveOfSundaram(int size) {
    int n = (size - 2) / 2;
    bool marked[n + 1];
    fill_n(marked, n + 1, false);

    for (int i = 1; i <= n; i++) {
        for (int j = i; (i + j + 2 * i * j) <= n; j++) {
            marked[i + j + 2 * i * j] = true;
        }
    }

    cout << "Прості числа з діапазону 2 до " << size << " через два числа: ";
    if (size >= 2) cout << "2 "; 
    for (int i = 1; i <= n; i++) {
        if (!marked[i]) {
            cout << 2 * i + 1 << " ";
            i++; 
        }
    }
    cout << endl;
}

void findPrimesInArray(int arr[], int size) {
    int maxNum = 0;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000 + 1;
        maxNum = max(maxNum, arr[i]);
    }

    bool primes[maxNum + 1];
    fill_n(primes, maxNum + 1, true);

    for (int p = 2; p * p <= maxNum; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= maxNum; i += p) {
                primes[i] = false;
            }
        }
    }

    cout << "Згенерований масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Прості числа з діапазону 2 до " << maxNum << ": ";
    for (int i = 2; i <= maxNum; i++) {
        if (primes[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Масив простих чисел та чисел згенерованого масиву: ";
    for (int i = 0; i < size; i++) {
        if (primes[arr[i]]) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    srand(time(nullptr));

    int size;
    cout << "Введіть розмір масиву (до 100): ";
    cin >> size;

    int array[size];
    findPrimesInArray(array, size);

    return 0;
}
