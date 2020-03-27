/*
The trick here is to keep the second for loop outside the first for loop.
Use two counter variables curr_max and total_max
curr_max will track the maximum value after each counter operation
once the A[i] == N+1, then store the curr_max into total_max and use it in the second for loop

Also, in the second for loop, check for the values less the total_max. This is not clear with the question
*/

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int i, temp;
    int curr_max = 0, total_max = 0;
    //vector<int> ret;
    vector<int> count(N,0);
    for (i = 0; i < A.size(); i++)
    {
        if ((A[i] <= N) && (A[i] >= 1))
        {
            if (count[A[i] -1] < total_max)
                count[A[i] - 1] = total_max;
            count[A[i] - 1]++;
            if (curr_max < count[A[i] - 1])
                curr_max = count[A[i] - 1];
        }
        else if (A[i] == (N+1))
            total_max = curr_max;
    }
    for (int j =0; j < count.size(); j++)
    {
        if (count[j] < total_max)
            count[j] = total_max;
    }
    return count;
}
