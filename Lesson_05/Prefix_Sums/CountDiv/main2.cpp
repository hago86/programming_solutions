int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int cnt = 0;
    int ans1 = A/K;
    int ans2 = B/K;

    cnt = ans2-ans1;
    if(A%K == 0)
        cnt++;

    return cnt;
}
