/*
The idea

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
