vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    K = K%A.size(); //This is to avoid the overflow.
    if (A.empty())
        return A;
    vector<int> v(A.size());
    int i, new_pos;
    for (i = 0; i < A.size(); i++)
    {
        new_pos = (i + K)%A.size(); //calculate the new index for the rotated elements and check for overflow.
        v[new_pos] = A[i];
    }
    return v;
}
