// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

/*
First find out all the factors and add them to a vector.
While doing so, use the concept that if 'i' is a factor of N then N/i will be another factor of N
and add the N/i to the vector as well.
Then sort the vector in ascending order since the factors will be in pairs
If N is a perfect square then there will odd number of factors. So, the while loop is i <= j
*/

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> factors;
    int i, j, result = INT_MAX;
    if (N == 1)
        return 4;

    for (i = 1; (i*i) <= N; i++)
    {
        if(N%i == 0) {
            factors.push_back(i);
            if (N/i != i)
                factors.push_back(N/i);
        }
    }

    //cout<<factors.size()<<endl;
    
    sort(factors.begin(), factors.end());
    /*for (i = 0; i < factors.size(); i++)
        cout<<factors[i]<<'\t';
    cout<<endl;*/
    
    i=0;
    j=factors.size() - 1;
    if (factors.size() == 2)
        return (2*(factors[0] + factors[1]));
    while (i <= j) {
        result = min(result, 2 *(factors[i] + factors[j]));
        //cout<<result<<'\t';
        i++;
        j--;
    }
    
    return result;
}
