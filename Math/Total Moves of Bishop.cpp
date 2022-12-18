int Solution::solve(int A, int B) {
    /*
    int ans=0;
    int i=A;
    int j=B;
    
    //i++ j--;
    while(i<=8 and j>=1){
        ans++;
        i++;
        j--;
    }
    ans = ans-1;
    i=A;
    j=B;
    //i-- j++;
    while(i>=1 and j<=8){
        ans++;
        i--;
        j++;
    }
    ans = ans-1;
    i=A;
    j=B;
    
    // i++ j++
    while(i<=8 and j<=8){
        ans++;
        i++;
        j++;
    }
    ans = ans-1;
    i=A;
    j=B;
    // i-- j--
    while(i>=1 and j>=1){
        ans++;
        i--;
        j--;
    }
    ans = ans-1;
    return ans;
    */
    
    // single line Solution
    return min(A-1,B-1) + min(8-A, 8-B) + min(A-1, 8-B) + min(8-A,B-1);
}
