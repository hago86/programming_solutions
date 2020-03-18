// you can use includes, for example:
#include <algorithm>
#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

/*
* The idea here is to use the data structure set in STL. Set doesn't allow duplicates.
* So we can insert all the elements of the vector and then return the size of the set
* which will be total number of unique values.
*/

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> s1;
    
    if (A.size() < 2)
        return A.size();

    for(auto& i1: A)
        s1.insert(i1);
        
    return s1.size();
}
