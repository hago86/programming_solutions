/*
There are multiple ways to solve this.
This method is using the reverse of the array to rotate it.
*/

void reverse(vector<int> &V, int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = V[start];
        V[start] = V[end];
        V[end] = temp;
        start++;
        end--;
    }
}

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    K = K%A.size();
    /*For empty array, check for A.size() instead of A.empty()
    */
    if (!A.size()) 
        return {};
    int len = A.size();
    reverse(A, 0, len - 1);
    reverse(A, 0, K - 1);
    reverse(A, K, len - 1);
    
    return A;
}
