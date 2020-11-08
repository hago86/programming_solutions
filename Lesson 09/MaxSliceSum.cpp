// you can use includes, for example:
#include <algorithm>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max1, max2, i;
    // Take 2 variables and initialize them to the first element of the array
  
    max1 = A[0];
    max2 = A[0];
    // Traverse the array from the 2nd element ie A[1]
    for(i = 1; i < A.size(); i++)
    {
        max1 += A[i]; // Calculate the sum of each subsequence
        //cout<<max1<<'\t';
        // if the sum is greater than the current element, then retain it.
        // else, the current value because the maximum sum will be in future elements
        max1 = max(max1, A[i]); 
        //cout<<max1<<'\t';
        // keep updating the final sum with the sum of each subsequence
        max2 = max(max2, max1); 
        //cout<<max1<<endl;
    }
    return max2;
}
