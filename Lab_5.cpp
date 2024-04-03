#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int binarySearch(int arr[], int size, int key) {
  
    int left = 0, right = size - 1;
  
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int interpolationSearch(int arr[], int size, int key) {
  
    int left = 0, right = size - 1;
  
    while (left <= right && key >= arr[left] && key <= arr[right]) {
      
        int pos = left + (((double)(right - left) / (arr[right] - arr[left])) * (key - arr[left]));
      
        if (arr[pos] == key) {
            return pos;
        } else if (arr[pos] < key) {
            left = pos + 1;
        } else {
            right = pos - 1;
        }
    }
    return -1;
}

int main() {
  
    srand(time(nullptr));

    int size;
  
    cout << "Введіть кількість елементів масиву: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Елементи масиву:" << endl;
  
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    int key1, key2;
    cout << "Введіть перше значення для пошуку: ";
  
    cin >> key1;
    cout << "Введіть друге значення для пошуку: ";
    cin >> key2;

    int result1, result2;
  
    if (size <= 20) {
      
        result1 = binarySearch(arr, size, key1);
        result2 = binarySearch(arr, size, key2);
      
    } else {
      
        result1 = interpolationSearch(arr, size, key1);
        result2 = interpolationSearch(arr, size, key2);
      
    }

    if (result1 != -1) {
      
        cout << "Значення " << key1 << " знайдено за індексом " << result1 << endl;
    } else {
      
        cout << "Значення " << key1 << " не знайдено в масиві" << endl;
    }

    if (result2 != -1) {
      
        cout << "Значення " << key2 << " знайдено за індексом " << result2 << endl;
    } else {
      
        cout << "Значення " << key2 << " не знайдено в масиві" << endl;
    }

    delete[] arr;

  
    return 0;
}
