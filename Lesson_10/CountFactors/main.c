#include <math.h>
int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
     unsigned int count = 0;
    int i = 0;
    int k = (int)sqrt(N);
    for (i = 1; i <= k; i++)
    {
        if (N % i == 0)
            count++;
    }
    count = count * 2;
    if (k * k == N)
        count = count  - 1;
  
    
    return count;
}
