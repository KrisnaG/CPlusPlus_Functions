#include <iostream>
#include <stack>
#include <queue>
#include "string.h"

using namespace std;

/**
 * @brief Determines if a string is a palindrome or not.
 * Utilises stack and queue from the Standard Template Library
 * to solve this problem.
 * 
 * @param word string to check
 */
void is_palindrome(string word) 
{
    stack<char> stack;
    queue<char> queue;
    bool is_palindrome = true;

    // Push each character to a stack and queue
    for (int i = 0; i != word.length(); i++) {
        if (word[i] != ' ') {
            stack.push(word[i]);
            queue.push(word[i]);
        }
    }

    // queue pops in order
    // stack pops in reverse order
    while(!stack.empty()) {
        if(stack.top() != queue.front()) {
            is_palindrome = false;
            break;
        }
        stack.pop();
        queue.pop();
    }
    
    if (is_palindrome)
        cout << word << " is a palindrome";
    else
        cout << word << " is NOT a palindrome";
}

int main()
{
    is_palindrome("a man a plan a canal panama");
    return 0;
}
