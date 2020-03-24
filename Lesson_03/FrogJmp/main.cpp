// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
/*
This solution works for the maximum values 1000000000.
If the difference between initial position and final position % D == 0
then just return the difference divided by D ie difference / D
else add one to the above division.
*/
int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int ans = 0;
    int min = 0;
    
    int difference = Y - X;
    if ((difference % D) != 0)
        min = 1;
    
    ans = (difference / D);
    return (ans + min);
}
