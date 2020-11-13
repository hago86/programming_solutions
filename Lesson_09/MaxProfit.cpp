// you can use includes, for example:
#include <algorithm>
#include <limits.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    /*
    Set the profit to 0 initially. We need to buy first before selling, so
    the first array value will be the initial purchasing cost of the stock.
    We need to find the minimum price which can change according to the values of the
    input array. So set it to INT_MAX rather than initializing it to A[0] 
    else if the input is an empty array that will lead to segfault
    */
    int minPrice = INT_MAX;
    int profit = 0;
    for (int i = 0; i < A.size(); i++) {
        /*profit is calcualted by the difference between the current day's price and the minimum price*/
        profit = max(profit, A[i]-minPrice);
        /*keep updating the minprice based on the array values*/
        minPrice = min(minPrice, A[i]);
    }
    return profit;
}
