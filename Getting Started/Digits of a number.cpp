#include <bits/stdc++.h>
using namespace std;

int digitcnt(int n){
    int cnt=0;
    while(n!=0){
        cnt++;
        n = n/10;
    }
    return cnt;
}


int main(int argc, char **argv){
    int n;
    cin >> n;

    int cnt = digitcnt(n);

    int div = pow(10, cnt-1);

    int temp = n;

    while(div!=0){
        int q = temp/div;
        cout << q << endl;
        temp = temp%div;
        div = div/10;
    }    
}
