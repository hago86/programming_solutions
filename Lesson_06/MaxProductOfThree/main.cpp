/*
Sort the array.
Since the array can contain negative numbers, we must take into consideration of the fact that
product of two negative numbers can be positive as well.
So, after sorting the array, take the product of last 3 values
Take the product of 1st 2 values and multiply with the last value
Now, return the maximum value between these two.
*/
// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if (A.size() == 3)
        return (A[0] * A[1] * A[2]);
    int max_value1, max_value2;
    sort(A.begin(), A.end());
    /*for (auto& i1 : A)
        cout<<i1<<" ";*/
    int i = A.size() - 1;    
    max_value1 = A[i] * A[i -1] * A[i-2];
    max_value2 = A[0] * A[1] * A[i];
    
    return max(max_value1, max_value2);
}
