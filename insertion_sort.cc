/**
 * @file insertion_sort.cc
 * @brief 
 * 
 */

#include <iostream>

using namespace std;


void insertion_sort(int* seq_numbers, int length)
{

}

void print_array(int* array, int length) {
    for (int i = 0; i != length; ++i) {
        cout << array[i] << " ";
    }
}

/** Driver for testing */
int main()
{
    const int SIZE = 10;
    int seq[SIZE] = { 4, 1, 3, 2, 16, 9, 10, 14, 8, 7 };
    
    cout << "Prior insertion sort:" << endl;
    print_array(seq, SIZE);

    insertion_sort(seq, SIZE);

    cout << "Post insertion sort:" << endl;
    print_array(seq, SIZE);

    return 0;
}
