/*Solution for lesson 3 permmissingElem*/
// you can use includes, for example:
#include <algorithm>
#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

/*An array A consisting of N different integers is given. 
The array contains integers in the range [1..(N + 1)], 
which means that exactly one element is missing.

Your goal is to find that missing element.

Since the array elements start from 1 instead of 0,
one approach is to use a set.
Add all the vector elements to the set
Traverse the set from 1 to vector.length + 1
and search for each element.
The missing element in the set is the answer
*/

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    set<int> s1;
    int i;
    
    for (auto& i1 : A)
        s1.insert(i1);
    int len = A.size() + 1;
    for(i = 1; i <= len; i++)
    {
        if (s1.find(i) == s1.end())
            break;
    }
    return i;
}
