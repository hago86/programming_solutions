// you can use includes, for example:
#include <algorithm>
#include <stack>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    
    //stack<int> up;
    stack<int> down;
    int p, cnt = (int) A.size();

    for (p = 0; p < (int)A.size(); p++)
    {
        if (B[p] == 1)
            down.push(A[p]);
        if (B[p] == 0)
        {
                while (!down.empty())
                {
                    if (down.top() > A[p]){
                        cnt--;
                        break;
                    }
                    else if (down.top() < A[p])
                    {
                        cnt--;
                        down.pop();
                    }
                }
        }
    }
    return cnt;
}
