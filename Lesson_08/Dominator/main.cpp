// you can use includes, for example:
#include <algorithm>
#include <unordered_map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_map<int, int> mp1;
    for (auto& i1: A)
    {
        mp1[i1]++;
    }
    int len = A.size()/2;
    auto i2 = mp1.begin();
    for (; i2 != mp1.end(); i2++)
    {
        if (i2->second > len)
            break;
    }
    if (i2 == mp1.end())
        return -1;
    int temp = i2->first;
    vector<int>:: iterator it = find(A.begin(), A.end(), temp);
    //cout<<(it - A.begin())<<endl;
    
    return (it - A.begin());
}
