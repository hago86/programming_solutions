// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


/*
Another way to solve this problem is to use the sum of n integers formula
N * (N+1)/2.
From the question, N is array length + 1.
*/

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unsigned int N = A.size() + 1;
    
    unsigned int sum = 0, i;
    unsigned int firstSum = N * (N+1)/2;
    for (i = 0; i < A.size(); i++)
    {
        sum += A[i];
    }
    return (firstSum - sum);
    
}
