// you can use includes, for example:
#include <algorithm>
#include <climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    
    int i, factor1, factor2, result = INT_MAX;
    
    for (i = 1; (i * i) <= N; i++)
    {
        if ((N%i) == 0)
        {
            factor1 = i;
            factor2 = N/i;
            //cout<<factor1<<" "<<factor2<<endl;
            result = min(result,2 * (factor1 + factor2));
        }
    }
    return result;
}
