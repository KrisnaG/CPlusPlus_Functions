/**
 * @file first_n_terms.cc
 * 
 * @brief Finding the nth summed term of a number solved using 
 * three different techniques:
 *  - Iterative
 *  - Recursive
 *  - Tail Recursive
 */

#include <iostream>

using namespace std;

int sum_n_terms_iteration(int number) {
    int sum = 0;
    for (int i = number; i != 0; --i) {
        sum = sum + i;
    }
    return sum;
}

int sum_n_terms(int number) {
    if (number > 1)
        return number + sum_n_terms(number-1);
    else 
        return 1;
}

int sum_n_terms_tail_rec(int number, int sum = 0) {
    if (number < 1)
        return sum;
    else 
        return sum_n_terms_tail_rec(number-1, sum+number);
}

int main()
{
    cout << sum_n_terms_iteration(6);
    cout << endl;
    cout << sum_n_terms(6);
    cout << endl;
    cout << sum_n_terms_tail_rec(6);
    
    return 0;
}
