#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Введіть значення для змінної a: ";
    cin >> a;
    cout << "Введіть значення для змінної b: ";
    cin >> b;

    int *ptr_a = &a;
    int *ptr_b = &b;

    if (a > b) {
        *ptr_a *= 2; // збільшуємо значення a у 2 рази
    } else {
        *ptr_b /= 2; // зменшуємо значення b у 2 рази
    }

    cout << "Нове значення a: " << a << endl;
    cout << "Нове значення b: " << b << endl;

    return 0;
}
