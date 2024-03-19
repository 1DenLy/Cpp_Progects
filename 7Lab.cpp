#include <iostream>

using namespace std;

int main() {
    // Завдання 1
    int number = 10;
    int *ptr = &number;
    cout << "Значення змінної number: " << number << endl;
    cout << "Значення вказівника ptr: " << *ptr << endl;

    // Завдання 2
    *ptr = 20;
    cout << "Нове значення number: " << number << endl;

    // Завдання 3
    ptr++;
    cout << "Значення ptr: " << *ptr << endl;
    cout << "Після збільшення ptr" << endl;

    // Завдання 4
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;
    cout << "arr: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << *arrPtr << " ";
        arrPtr++;
    }
    cout << endl;

    // Завдання 5
    int var = 100;
    int *ptrToVar = &var;
    int **doublePtr = &ptrToVar;
    cout << "Значення var через подвійний вказівник: " << **doublePtr << endl;
    cout << "Адреса doublePtr: " << doublePtr << endl;

    return 0;
}
