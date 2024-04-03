#include <iostream>

using namespace std;

void binarySearch() {
  
    const int size = 10;
    int arr[size];

    // Введення даних з клавіатури
    for (int i = 0; i < size; i++) {
        cout << "Введіть " << i + 1 << "-й елемент: ";
        cin >> arr[i];
    }

    int x;
  
    cout << "Введіть число для пошуку: ";
    cin >> x;

    // Перевірка на наявність числа у масиві
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            cout << "Значення " << x << " знайдено в елементі з індексом " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Значення " << x << " не знайдено в масиві." << endl;
    }
}

void reverseArray(int arr[], int size) {
    // Реверсія масиву
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

bool isSorted(int arr[], int size) {
    // Перевірка, чи є масив відсортованим
    bool sorted = true;
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i]) {
            sorted = false;
            break;
        }
    }
    return sorted;
}

void printBounds(int left, int right, int middle) {
    // Виведення крокових кордонів
    cout << "Лівий кордон: " << left << endl;
    cout << "Правий кордон: " << right << endl;
    cout << "Середина: " << middle << endl;
}

int main() {
  
    int size = 5;
    int arr[size] = {3, 5, 8, 10, 15};

    // Виклик функцій для завдань 3-5
    binarySearch();

    reverseArray(arr, size);
  
    bool sorted = isSorted(arr, size);
  
    if (sorted) {
        cout << "Масив є відсортованим." << endl;
    } else {
        cout << "Масив не є відсортованим." << endl;
    }

    int left = 0;
    int right = size - 1;
    int middle = (left + right) / 2;
  
    printBounds(left, right, middle);

    return 0;
}
