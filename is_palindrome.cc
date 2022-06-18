#include <iostream>
#include <stack>
#include <queue>
#include "string.h"

using namespace std;

void is_palindrome(string word) 
{
    stack<char> stack;
    queue<char> queue;
    bool is_palindrome = true;

    for (int i = 0; i != word.length(); i++) {
        if (word[i] != ' ') {
            stack.push(word[i]);
            queue.push(word[i]);
        }
    }

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
