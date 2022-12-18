int Solution::solve(int A, int B, int C) {
    int t = A%B;
    
    int ans = t+C-1;
    
    return ans%B;
}
