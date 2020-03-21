int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int res = 0;
    int i;
    
    for (i = 0; i < A.size(); i++)
    {
        res = res ^ A[i];
    }
    return res;
}
