/*
The idea is:
1) If the string is empty, return true
2) Use a stack
3) If the string contains any of the open brackets like '(' or '{' or '[', push it to the stack top
4) Else if the current char in the string is any one of the closing brackets like ')' or '}' or ']', and the 
   stack top contains the corresponding opening bracket, then remove the stack top by popping it
5) Else, keep adding the chars to the stack
6) Finally, if the stack is empty then all the brackets are properly nested. So return 1 else 0
*/


// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int i;
    stack<char> s;
    if (S.empty())
        return 1;
    
    for (i = 0; i< S.size(); i++)
    {
        if ((S[i] == '{') || (S[i] == '(') || (S[i] == '['))
            s.push(S[i]);
        else
        {
            if ((!S.empty()) && (S[i] == '}') && (s.top() == '{'))
                s.pop();
            else if ((!S.empty()) && (S[i] == ']') && (s.top() == '['))
                s.pop();
            else if ((!S.empty()) && (S[i] == ')') && (s.top() == '('))
                s.pop();
            else
                s.push(S[i]);
        }
        //cout<<s.top()<<endl;
    }
    if(s.empty())
        return 1;
    return 0;
}
