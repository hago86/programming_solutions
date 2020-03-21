// you can use includes, for example:
#include <algorithm>
#include <climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

/*
No need to check excelusively for power of 2;
Just need to reset the counter ie bgap = 0 twice
else it will keep adding total number of zeroes.
*/

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int bgap = 0, maxgap = 0;
    bool flag = false;
    
    while (N)
    {
        if (N & 1)
        {
            if (flag)
            {
                maxgap = max(maxgap, bgap);
                bgap = 0;
            }
            flag = true;
            bgap = 0;
        }
        else {
            bgap++;
        }
        N = N >> 1;
    }
    return maxgap;
}
