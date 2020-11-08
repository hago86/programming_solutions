/*
Note that the input array can contain duplicates and
negative numbers. But we need to only find the smallest
positive integer greater than 0 mising in this array
*/


int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    set <int> s1;
    for(auto& i1: A)
        s1.insert(i1);
    
    int i, length;
    length = A.size() + 1;

    for(i = 1; i <= length; i++)
    {
        if (s1.find(i) == s1.end())
            return i;
    }
    
    return 1;
}
