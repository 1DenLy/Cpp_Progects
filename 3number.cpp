#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void evenOddSort(int arr[], int size) {
    int left = 0, right = size - 1;
    
    while (left < right) {
        while (arr[left] % 2 == 0 && left < right) {
            left++;
        }
        while (arr[right] % 2 != 0 && left < right) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    const int size = 10;
    int arr[size] = {2, 5, 7, 8, 10, 11, 13, 14, 16, 17};
    
    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
    
    evenOddSort(arr, size);
    
    std::cout << "Array after sorting: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
    
    return 0;
}
