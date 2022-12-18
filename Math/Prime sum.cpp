vector<int> Solution::primesum(int A) {
   
   // pre-requisite is sieve of erastothenes aana chaiye boss !
    
    // condition for checking the prime numbers;
    int n= A;
    
    vector <bool> sieve(n,true);
    
    for(int i=2; i<sqrt(n); ++i){
        for(int j=2; i*j<n; ++j){
            sieve[i*j] =false;
        }
    }
    
    vector <int> res;
    
    for(int i=2; i<n; ++i){
        if(sieve[i]&&sieve[n-i]){
            res.push_back(i);
            res.push_back(n-i);
            return res;
        }
    }
    
}
