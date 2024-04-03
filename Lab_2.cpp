#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

void generateAndFilterNumbers() {
    const int size = 14;
    int threshold = 50;

    int nums[size];
    int filtered[size];
    int filteredCount = 0;

    cout << threshold << endl;

    for (int i = 0; i < size; i++) {
        nums[i] = -100 + rand() % 201;
        cout << nums[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        if (abs(nums[i]) > threshold) {
            filtered[filteredCount++] = nums[i];
        }
    }

    for (int i = 0; i < filteredCount; i++) {
        cout << filtered[i] << " ";
    }
    cout << endl;
}

void makeNegativePositive() {
    const int size = 14;
    int nums[size];

    for (int i = 0; i < size; i++) {
        nums[i] = -50 + rand() % 101;
        cout << nums[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        if (nums[i] < 0) {
            nums[i] *= -1;
        }
        cout << nums[i] << " ";
    }
    cout << endl;
}

void withdrawMoney() {
    int denoms[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int amount;
    cout << "Введіть суму для зняття: ";
    cin >> amount;

    for (int i = 0; i < 10; i++) {
        while (amount - denoms[i] >= 0) {
            cout << denoms[i] << ", ";
            amount -= denoms[i];
        }
    }
    cout << endl;
}

void mergeAndSortArrays() {
    const int size1 = 6;
    const int size2 = 8;

    int arr1[size1];
    int arr2[size2];
    int merged[size1 + size2];

    for (int i = 0; i < size1; i++) {
        arr1[i] = rand() % 100;
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size2; i++) {
        arr2[i] = rand() % 100;
        cout << arr2[i] << " ";
    }
    cout << endl;

    int mergedIndex = 0;
    for (int i = 0; i < size1; i++) {
        merged[mergedIndex++] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[mergedIndex++] = arr2[i];
    }

    for (int i = 1; i < size1 + size2;) {
        if (merged[i - 1] > merged[i]) {
            int temp = merged[i];
            merged[i] = merged[i - 1];
            merged[i - 1] = temp;
            i = 1;
        } else {
            i++;
        }
    }

    cout << endl;
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(nullptr));

    cout << endl << "Завдання 1" << endl << "----------" << endl;
    generateAndFilterNumbers();
    cout << endl << "Завдання 2" << endl << "----------" << endl;
    makeNegativePositive();
    cout << endl << "Завдання 3" << endl << "----------" << endl;
    withdrawMoney();
    cout << endl << "Завдання 4" << endl << "----------" << endl;
    mergeAndSortArrays();
    cout << endl;

    return 0;
}
