#include <iostream>

using namespace std;

void linearSearch() {
  
    const int size = 10;
    int arr[size];

    cout << "Введіть " << size << " елементів масиву:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
  
    cout << "Введіть значення для пошуку: ";
    cin >> target;

    bool found = false;
  
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
          
            found = true;
            cout << "Елемент зі значенням " << target << " знаходиться на позиції " << i << " у масиві." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Елемент зі значенням " << target << " не знайдено у масиві." << endl;
    }
}

int main() {
  
    linearSearch();

    return 0;
}
