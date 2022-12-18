// Q.E.D with the checking of boolean sieve

vector<int> Solution::sieve(int A) {
    vector <int> ans;
    int n=A;
    vector <bool> sieve(n,true);
    
    for(int i=2; i*i<n; ++i){
        for(int j=2; i*j<n; ++j){
            sieve[i*j] = false;
        }
    }
    
    for(int i=2; i<n; ++i){
        if(sieve[i]){
            ans.push_back(i);
        }
    }
    return ans;
}
