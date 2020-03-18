/*passing cars*/
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int east = 0, west = 0;
    int i;
    
    for (i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
            east++;
        if (A[i] == 1)
        {
            west = east + west;
        }
    }
    
    if (west > 1000000000 || west < 0)
        return -1;
    
    return west;
}
