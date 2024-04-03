#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

void printNumbersInRange(){
    int firstNum = 1, secondNum = 4, thirdNum = 8;
    cout << firstNum << " " << secondNum << " " << thirdNum << endl;

    int rangeLimit = 5;
    if(1 <= firstNum && firstNum <= rangeLimit)
        cout << firstNum << " ";
    if(1 <= secondNum && secondNum <= rangeLimit)
        cout << secondNum << " ";
    if(1 <= thirdNum && thirdNum <= rangeLimit)
        cout << thirdNum << " ";

    cout << endl;
}

void findLargest(){
    int firstNum = 2, secondNum = 3, thirdNum = 5;
    cout << firstNum << " " << secondNum << " " << thirdNum << endl;

    if(firstNum > secondNum && firstNum > thirdNum)
        cout << firstNum << endl;
    if(secondNum > firstNum && secondNum > thirdNum)
        cout << secondNum << endl;
    if(thirdNum > firstNum && thirdNum > secondNum)
        cout << thirdNum << endl;
}

void printSequenceAndSum(){
    int num;
    cout << "Введіть число: ";
    cin >> num;

    double firstNum = 1;
    double sum = 0;
    for(int i = 0; i < num; i++)
    {
        cout << firstNum << " ";
        sum += firstNum;
        firstNum /= -2;
    }
    cout << endl << "Сума: " << sum << endl;
}

void findSmallestFactor(){
    int num = 7;

    int factor = 2;
    while(num % factor != 0)
    {
        factor++;
    }
    cout << factor << endl;
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
        cout << nextNum << " ";
    }
    cout << endl;
}

void guessNumber(){
    srand(time(0)); 
    int randomNumber = 1 + rand() % 20;
    for(int attempt = 1; true; attempt++)
    {
        int guessedNumber;
        cout << "Вгадайте число: ";
        cin >> guessedNumber;

        if(guessedNumber <= 0 || guessedNumber >= 21)
        {
            cout << "Невірне введення!" << endl;
            attempt--;
            continue;
        }
        if(guessedNumber == randomNumber)
        {
            cout << "Вірно!" << endl << "Ви вгадали число за " << attempt << " спроб" << (attempt > 1 ? "и" : "") << "!";
            break;
        }
        else
        {
            cout << "Неправильно!";
            if(guessedNumber > randomNumber)
                cout << endl << " Спробуйте менше число!" << endl;
            else
                cout << endl << " Спробуйте більше число!" << endl;
        }
    }
}

int main()
{
    cout << endl << "Завдання 1" << endl << "----------" << endl;
    printNumbersInRange();
    cout << endl << "Завдання 2" << endl << "----------" << endl;
    findLargest();
    cout << endl << "Завдання 3" << endl << "----------" << endl;
    printSequenceAndSum();
    cout << endl << "Завдання 4" << endl << "----------" << endl;
    findSmallestFactor();
    cout << endl << "Завдання 5" << endl << "----------" << endl;
    fibonacciSequence();
    cout << endl << "Завдання 6" << endl << "----------" << endl;
    guessNumber();
    cout << endl;
    return 0;
}
