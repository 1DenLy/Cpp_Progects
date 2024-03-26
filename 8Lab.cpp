#include <iostream>
#include <string>

using namespace std;


int main() {

  
    // Завдання 1: Ввести рядок з клавіатури та вивести його на екран

    string str;
    cout << "Введіть рядок: ";

    getline(cin, str);
    cout << "Введений рядок: " << str << endl;

  
    // Завдання 2: Перетворити всі символи рядка до нижнього регістру

    for (char &c : str) {
        c = tolower(c);
    }

    cout << "Рядок у нижньому регістрі: " << str << endl;

  
    // Завдання 3: Знайти індекс першого входження символу в рядку
    char target;
    cout << "Введіть символ для пошуку: ";

    cin >> target;
    size_t index = str.find(target);

    if (index != string::npos) {
        cout << "Індекс першого входження символу '" << target << "': " << index << endl;
    } else {
        cout << "Символ '" << target << "' не знайдено у рядку." << endl;
    }

  
// Завдання 4: Вивести рядок у зворотному порядку
    cout << "Рядок у зворотному порядку: ";

    for (int i = str.length() - 1; i >= 0; --i) {
        cout << str[i];
    }
    cout << endl;

  
// Завдання 5: Склеїти два рядки
    string str2;

    cout << "Введіть другий рядок: ";
    
    cin.ignore();
    getline(cin, str2);
    
    string combined = str + str2;
    cout << "Склеєний рядок: " << combined << endl;

  
// Завдання 6: Видалити з рядка всі входження символу
  
    char toRemove;
    
    cout << "Введіть символ для видалення: ";
    cin >> toRemove;
    size_t pos;
    while ((pos = combined.find(toRemove)) != string::npos) {
        combined.erase(pos, 1);
    }
    cout << "Рядок після видалення символу: " << combined << endl;

    return 0;
}



