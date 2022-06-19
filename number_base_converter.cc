#include <iostream>
#include <stack>

using namespace std;

/**
 * @brief Converts an integer of base 10 to another given base
 * Utilises a stack from the Standard Template Library to solve
 * this problem.
 * 
 * @param number 
 * @param base 
 */
void number_base_converter(int number, int base)
{
    stack<int> s;

    while (number != 0) {
        s.push(number % base);
        number = number/base;
    }

    while(!s.empty()) {
        if (s.top() > 9) {
            char c = (s.top() - 10) + 65;
            cout << c;
        } else 
            cout << s.top();
        s.pop();
    }
}

/**
 * @brief Converts an integer of base 10 to another given base.
 * Utilises tail recursion on the run time stack to solve this 
 * problem.
 * 
 * @param number 
 * @param base 
 */
void number_base_converter_runtime_stack(int number, int base)
{
  if (number > base) 
    number_base_converter_runtime_stack(number / base, base);
  int r = number % base;
  if (r > 9) {
    char c = (r - 10) + 65;
    cout << c;
  }
  else
    cout << r;
}


int main()
{
    cout << "7867 to base 2: ";
    number_base_converter(7867, 2);

    cout << endl;

    cout << "7867 to base 2 (run-time stack): ";
    number_base_converter_runtime_stack(7867, 2);
    
    return 0;
}