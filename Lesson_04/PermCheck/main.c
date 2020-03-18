/*
The idea here is to xor the elements with its index.
If the final result is equal to the length of the array,
then return 1 i.e the array is a permutation
else return 0
*/

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    int i;
    int sum = 0;
    for (i = 0; i < N; i++)
    {
        sum = sum ^ i ^ A[i];   
    }
    if (sum == N)
        return 1;
    return 0;
}
