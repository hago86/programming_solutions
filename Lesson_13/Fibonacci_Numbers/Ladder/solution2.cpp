/*
There are different ways to solve this problem.
Normal Fib series starts from 0,1,1,2,3,5,8 and so on..
This solution will go with the modified Fibonacci series.
So, we will initialise the first 2 values of vector fib to 1
Also, we are using a preprocessor macro 
1) take the length of the vector A
2) create a vector fib which will hold the fibonacci series
3) initialize the first 2 values of the vector to 1
4) find the maximum value of the input vector A
5) Fill the rest of the fib vector until maximum value
6) To avoid the overflow of larger integer values, instead of division, we can use bitwise '&' with ((1<<30) - 1)
7) Create another vector and from the fib vector, take the values of A[i] since there are fib[A[i]] ways to climb the ladder
8) Instead of doing modulo 2 ^ b[l], you can do a bitwise '&' operation with ((1<<B[l])-1)
*/

// you can use includes, for example:
#include <algorithm>
#include <vector>

#define DIVISOR ((1 << 30) - 1)

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(1);
    int len = A.size();
    int i, maxv = 0;
    for (i = 0; i < len; i++)
    {
        maxv = max(A[i], maxv);   
    }
    for (i = 2; i <= maxv; i++)
    {
        int temp = (fib[i - 1] + fib[i - 2]) & DIVISOR;
        fib.push_back(temp);
    }
    /*for (auto& i1: fib)
        cout<<i1<<" ";*/

    vector<int> res;
    for (i = 0; i < len; i++)
    {
        int temp =fib[A[i]] & ((1 << B[i]) - 1);
        res.push_back(temp);
    }
    return res;
}
