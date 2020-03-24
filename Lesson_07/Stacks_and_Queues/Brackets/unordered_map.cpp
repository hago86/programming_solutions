/*
Same concept, but using unordered_map
the map will contain the closing bracket as key and the corresponding opening bracket as value
*/

// you can use includes, for example:
#include <algorithm>
#include <stack>
#include <unordered_map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    if (S.length() == 0)
        return 1;
    
    stack<char> s;
    unordered_map<char, char> mp;
    mp[']'] = '[';
    mp['}'] = '{';
    mp[')'] = '(';

    for (int i = 0; i < S.size(); i++)
    {
        if ((S[i] == '[') || (S[i] == '{') || (S[i] == '('))
            s.push(S[i]);
        else {
            if (s.empty()) return false;
            if (mp[S[i]] == s.top())
                s.pop();
            else
                s.push(S[i]);
        }
    }
     if (s.empty())
        return 1;
    return 0;
}
