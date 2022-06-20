/**
 * @file fibonacci.cc
 * 
 * @brief Finding the nth term of a Fibonacci sequence solved using 
 * three different techniques:
 *  - Iterative
 *  - Recursive
 *  - Tail Recursive
 */

#include <iostream>

using namespace std;

/**
 * @brief nth fibonacci term utilising an iterative approach
 * 
 * @param number nth term to find
 * @return int - result of nth term
 */
int fib_iteration(int number)
{
    int sum = 1;

    if(number > 2) {
        
        int previous = 1;

        for(int i = 2; i != number; ++i) {
            sum = sum + previous;              
            previous = sum - previous;
        }
    }

    return sum;
}

/**
 * @brief nth fibonacci term utilising a recursive approach
 * 
 * @param number nth term to find
 * @return int - result of nth term
 */
int fib_rec(int number)
{
    if (number <= 0)
        return 0;
    else if (number <= 2)
        return 1;
    else 
        return fib_rec(number - 1) + fib_rec(number - 2); 
}

/**
 * @brief nth fibonacci term utilising a tail recursive approach
 * 
 * @param number nth term to find
 * @param sum 
 * @param previous 
 * @return int - result of nth term
 */
int fib_tail_rec(int number, int sum = 1, int previous = 1)
{
    if (number < 3)
        return sum;
    else
        return fib_tail_rec(number - 1, sum + previous, sum);
}

/**
 * @brief Main to test functions
 */
int main()
{
    cout << "Fibonacci of 8 should be 21" << endl;
    cout << "Iterative: " << fib_iteration(8) << endl;
    cout << "Recursive: " << fib_rec(8) << endl;
    cout << "Tail Recursive: " << fib_tail_rec(8) << endl;

    cout << endl;

    cout << "Fibonacci of 15 should be 610" << endl;
    cout << "Iterative: " << fib_iteration(15) << endl;
    cout << "Recursive: " << fib_rec(15) << endl;
    cout << "Tail Recursive: " << fib_tail_rec(15) << endl;

    return 0;  
}
