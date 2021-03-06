/*
Either we can use the data type long
or use subtraction to avoid overflow
*/

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int i;
    sort(A.begin(), A.end());
    
    for(i = 0; i < A.size(); i++)
    {
        if (((A[i+2] - A[i+1]) <A[i]) &&
            ((A[i] - A[i+2]) < A[i+1]) &&
            ((A[i+1] - A[i]) < A[i+2]))
            return 1;
    }
    return 0;
}
