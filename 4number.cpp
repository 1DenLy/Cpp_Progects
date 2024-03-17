#include <iostream>
using namespace sdt;

double findElementEqualToAverage(int arr[], int size) {
    if (size == 0) {
        cout << "Error: Array size is zero.\n";
        return 0;
    }

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = sum / size;
    for (int i = 0; i < size; i++) {
        if (arr[i] == average) {
            return arr[i];
        }
    }

    cout << "Error << endl;
      
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    double result = findElementEqualToAverage(arr, size);
    if (result != 0) {
        cout << "Element equal to the average: " << result << endl;
    }

    return 0;
}
