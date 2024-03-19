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
    cout << "Нове значення змінної number: " << number << endl;

    // Завдання 3
    ptr++;
    cout << "Значення, на яке вказує ptr після збільшення: " << *ptr << endl;
    cout << "Після збільшення ptr вказує на нову адресу, не на number." << endl;

    // Завдання 4
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;
    cout << "Значення елементів масиву arr:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *arrPtr << " ";
        arrPtr++;
    }
    cout << endl;

    // Завдання 5
    int var = 100;
    int *ptrToVar = &var;
    int **doublePtr = &ptrToVar;
    cout << "Значення змінної var через подвійний вказівник: " << **doublePtr << endl;
    cout << "Адреса подвійного вказівника doublePtr: " << doublePtr << endl;

    return 0;
}
