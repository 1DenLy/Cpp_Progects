#include <iostream>
#include <cstdlib>
#include <ctime> 

void printNumbersInRange(){
    int firstNum = 1, secondNum = 4, thirdNum = 8;
    std::cout << firstNum << " " << secondNum << " " << thirdNum << std::endl;

    int rangeLimit = 5;
    if(1 <= firstNum && firstNum <= rangeLimit) std::cout << firstNum << " ";
    if(1 <= secondNum && secondNum <= rangeLimit) std::cout << secondNum << " ";
    if(1 <= thirdNum && thirdNum <= rangeLimit) std::cout << thirdNum << " ";

    std::cout << std::endl;
}

void findLargest(){
    int firstNum = 2, secondNum = 3, thirdNum = 5;
    std::cout << firstNum << " " << secondNum << " " << thirdNum << std::endl;

    if(firstNum > secondNum && firstNum > thirdNum) std::cout << firstNum << std::endl;
    if(secondNum > firstNum && secondNum > thirdNum) std::cout << secondNum << std::endl;
    if(thirdNum > firstNum && thirdNum > secondNum) std::cout << thirdNum << std::endl;
}

void printSequenceAndSum(){
    int num;
    std::cout << "Введіть число: ";
    std::cin >> num;

    double firstNum = 1;
    double sum = 0;
    for(int i = 0; i < num; i++)
    {
        std::cout << firstNum << " ";
        sum += firstNum;
        firstNum /= -2;
    }
    std::cout << std::endl << "Сума: " << sum << std::endl;
}

void findSmallestFactor(){
    int num = 7;

    int factor = 2;
    while(num % factor != 0)
    {
        factor++;
    }
    std::cout << factor << std::endl;
}

void fibonacciSequence(){
    int firstNum = 0, secondNum = 1, nextNum;
    int limit = 10;
    for(int i = 0; i < limit; ++i)
    {
        if(i <= 1)
            nextNum = i;
        else
        {
            nextNum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = nextNum;
        }
        std::cout << nextNum << " ";
    }
    std::cout << std::endl;
}

void guessNumber(){
    srand(time(0)); // Ініціалізація генератора випадкових чисел
    int randomNumber = 1 + rand() % 20;
    for(int attempt = 1; true; attempt++)
    {
        int guessedNumber;
        std::cout << "Вгадайте число: ";
        std::cin >> guessedNumber;

        if(guessedNumber <= 0 || guessedNumber >= 21)
        {
            std::cout << "Невірне введення!" << std::endl;
            attempt--;
            continue;
        }
        if(guessedNumber == randomNumber)
        {
            std::cout << "Вірно!" << std::endl << "Ви вгадали число за " << attempt << " спроб" << (attempt > 1 ? "и" : "") << "!";
            break;
        }
        else
        {
            std::cout << "Неправильно!";
            if(guessedNumber > randomNumber)
            {
                std::cout << std::endl << " Спробуйте менше число!" << std::endl;
            }
            else
            {
                std::cout << std::endl << " Спробуйте більше число!" << std::endl;
            }
        }
    }
}

int main()
{
    std::cout << std::endl << "Завдання 1" << std::endl << "----------" << std::endl;
    printNumbersInRange();
    std::cout << std::endl << "Завдання 2" << std::endl << "----------" << std::endl;
    findLargest();
    std::cout << std::endl << "Завдання 3" << std::endl << "----------" << std::endl;
    printSequenceAndSum();
    std::cout << std::endl << "Завдання 4" << std::endl << "----------" << std::endl;
    findSmallestFactor();
    std::cout << std::endl << "Завдання 5" << std::endl << "----------" << std::endl;
    fibonacciSequence();
    std::cout << std::endl << "Завдання 6" << std::endl << "----------" << std::endl;
    guessNumber();
    std::cout << std::endl;
    return 0;
}




















