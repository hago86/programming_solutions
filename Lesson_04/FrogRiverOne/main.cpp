/*
The idea here is to check, whether the input array contains 
all the values from 1 to X inclusive.
To check this, create an unordered_set, and insert values from 1 <= X in the set

Now, compare the values of the input array, if the value is present in the set
delete it.
At the end, if the set is empty, then all the leaves are present and the frog can jump successfully.
Else the jump can't be accomplished.
*/

// you can use includes, for example:
#include <algorithm>
#include <unordered_set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_set<int> s1;
    int i;
    
    for(int i1 = 1; i1 <= X; i1++)
    {
        s1.insert(i1);
    }
    for(i = 0; i < A.size(); i++)
    {
        if (s1.find(A[i]) != s1.end())
            s1.erase(A[i]);
        if (s1.empty())
            return i;
    }
    return -1;
}
