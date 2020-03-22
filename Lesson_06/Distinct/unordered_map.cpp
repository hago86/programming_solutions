// you can use includes, for example:
#include <algorithm>
#include <unordered_map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
/*
It seems that, using set is not efficient.
So, we can use either unordered_map or unordered_set.
*/

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    unordered_map<int, int> mp;
    
    for(auto& i1: A)
    {
        mp[i1]++;
    }
    /*for (auto& i2: mp)
    {
        cout<<i2.first<<" ";
    }*/
    return mp.size();
}
