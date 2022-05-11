#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin>>n;
    
    // the solution is the perfect square by observing the pattern

    for(int i=1; i*i<=n; ++i){
        cout << i*i << endl;
    }
}
