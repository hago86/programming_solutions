// you can use includes, for example:
#include <algorithm>
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> s;
    
    int i;
    
    if (S.empty())
        return 1;
    
    for (i = 0; i < S.length(); i++)
    {
        if (S[i] == '(')
            s.push(S[i]);
        else if (!s.empty() && (s.top() == '(') &&(S[i] == ')'))
            s.pop();
        else
            s.push(S[i]);
    }
    
    if (s.empty())
        return 1;
    return 0;
}
