/*Tape Equilibrium*/
// you can use includes, for example:
#include <algorithm>
#include <climits>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

/*The idea here is to
* First calculate the total sum of elements in the array
* Now initialise two more variables to 0 which will be sum2 and sum3
* Traverse the input vector from 1 till end
* each time take the sum of the first part of the array and add it to sum2
* sum2 = sum2 + A[i - 1];
* Subtract the sum2 from sum3 which will give the sum of elements right to the P ie i
* sum3 = total_sum - sum2;
* find the minimum value using the in-built function min
* return the minimum value
*/

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int total_sum = 0, sum2 = 0, i, sum3 = 0;
    int min1 = INT_MAX, diff;
    
    if (A.size() < 2)
        return A.size();
    
    for(i = 0; i < A.size(); i++)
        total_sum += A[i];

    for (i = 1; i < A.size(); i++)
    {
        sum2 = sum2 + A[i - 1];
        sum3 = total_sum - sum2;
        diff = abs(sum3 - sum2);
        min1 = min(diff, min1);
    }

    return min1;    
}
