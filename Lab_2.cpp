#include <iostream>
#include <vector>
#include <cstdlib> 

void generateAndFilterNumbers() {
    const int arraySize = 14;
    int maxThreshold = 50;

    std::cout << maxThreshold << std::endl;

    int numbers[arraySize];
    std::vector<int> filteredNumbers;

    for (int i = 0; i < arraySize; i++) {
        numbers[i] = -100 + rand() % 201;
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < arraySize; i++) {
        if (abs(numbers[i]) > maxThreshold) {
            filteredNumbers.push_back(numbers[i]);
        }
    }

    for (int i = 0; i < filteredNumbers.size(); i++) {
        std::cout << filteredNumbers[i] << " ";
    }
    std::cout << std::endl;
}

void makeNegativePositive() {
    const int arraySize = 14;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        numbers[i] = -50 + rand() % 101;
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < arraySize; i++) {
        if (numbers[i] < 0) {
            numbers[i] *= -1;
        }
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

void withdrawMoney() {
    int denominations[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int amount;
    std::cout << "Введіть суму для зняття: ";
    std::cin >> amount;

    for (int i = 0; i < 10; i++) {
        while (amount - denominations[i] >= 0) {
            std::cout << denominations[i] << ", ";
            amount -= denominations[i];
        }
    }
    std::cout << std::endl;
}

void mergeAndSortArrays() {
    const int size1 = 6;
    const int size2 = 8;

    int array1[size1];
    int array2[size2];
    int mergedArray[size1 + size2];

    for (int i = 0; i < size1; i++) {
        array1[i] = rand() % 100;
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < size2; i++) {
        array2[i] = rand() % 100;
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    int mergedIndex = 0;
    for (int i = 0; i < size1; i++) {
        mergedArray[mergedIndex++] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[mergedIndex++] = array2[i];
    }

    for (int i = 1; i < size1 + size2;) {
        if (mergedArray[i - 1] > mergedArray[i]) {
            int temp = mergedArray[i];
            mergedArray[i] = mergedArray[i - 1];
            mergedArray[i - 1] = temp;
            i = 1;
        } else {
            i++;
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << std::endl << "Завдання 1" << std::endl << "----------" << std::endl;
    generateAndFilterNumbers();
    std::cout << std::endl << "Завдання 2" << std::endl << "----------" << std::endl;
    makeNegativePositive();
    std::cout << std::endl << "Завдання 3" << std::endl << "----------" << std::endl;
    withdrawMoney();
    std::cout << std::endl << "Завдання 4" << std::endl << "----------" << std::endl;
    mergeAndSortArrays();
    std::cout << std::endl;
    return 0;
}














