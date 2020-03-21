// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
/*
There are different ways to solve this problem.
Normal Fib series starts from 0,1,1,2,3,5,8 and so on..
Either change F[0] to 1 and compute the full fib series
or go with the conventional way.

Here with the conventional way
1) take the length of the vector A
2) create a vector fib which will hold the fibonacci series
3) initialize the first 2 values of the vector to 0 and 1
4) find the maximum value of the input vector A
5) Fill the rest of the fib vector until maximum value + 1
6) To avoid the overflow of larger integer values, divide the fib[N] by (1<<30)
7) Create another vector and from the fib vector, take the values of A[i] + 1 since there are fib[A[i]+1] ways to climb the ladder
8) Instead of doing modulo 2 ^ b[l], you can use bitwise operation ie (1<<B[l])
*/
vector<int> solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int len = A.size();
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    int i;
    int maxv = 0;
    for (i = 0; i < len; i++)
    {
        maxv = max(A[i], maxv);
    }
    for (i = 2; i <= (maxv + 1); i++)
    {
        int temp = (fib[i - 1] + fib[i-2]) %(1<<30);
        fib.push_back(temp);
    }
    vector<int> res;
    for (i = 0; i < len; i++)
    {
        int temp = fib[A[i] + 1]%(1<<B[i]);
        res.push_back(temp);
    }
    
    return res;
}
