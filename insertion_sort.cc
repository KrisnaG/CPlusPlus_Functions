/**
 * @file insertion_sort.cc
 * @brief Insertion sort function that sorts an array of integers
 * Time complexity: O(n)
 */

#include <iostream>

using namespace std;

/**
 * @brief Sorts an integer array using insertion sort.
 * 
 * @param seq_numbers array of integers to sort
 * @param length length of int array
 */
void insertion_sort(int* seq_numbers, int length)
{
    int number;
    int i;

    for (int j = 1; j != length; ++j) {
        
        number = seq_numbers[j];
        i = j - 1;

        // Find where to insert the number
        while (i >= 0 && seq_numbers[i] > number) {
            seq_numbers[i + 1] = seq_numbers[i];
            --i;
        }
        
        seq_numbers[i + 1] = number;
    }
}

/* Print an array to console */
void print_array(int* array, int length) {
    for (int i = 0; i != length; ++i)
        cout << array[i] << " ";
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
