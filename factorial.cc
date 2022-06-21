/**
 * @file factorial.cc
 * 
 * @brief Finding the factorial of a number solved using 
 * three different techniques:
 *  - Iterative
 *  - Recursive
 *  - Tail Recursive
 */

#include <iostream>

using namespace std;

int factorial_iterative(int number)
{
    int sum = 1;
    for(int i = 1; i <= number; ++i) {
        sum = sum * i;
    }
    return sum;
}

int factorial_rec(int number)
{
    if (number < 1)
        return 1;
    else
        return number * factorial_rec(number - 1);
}

int factorial_tail_rec(int number, int sum = 1)
{
    if (number < 1)
        return sum;
    else
        return factorial_tail_rec(number - 1, sum * number);
}

int main()
{
    cout << factorial_iterative(4) << endl;
    cout << factorial_rec(4) << endl;
    cout << factorial_tail_rec(4) << endl;
    
    return 0;
}