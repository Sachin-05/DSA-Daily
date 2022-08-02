#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tt;
	cin >> tt;
	while(tt--){
	    int n;
	    cin >> n;
	    vector <int> v(n);
	    for(int i=0; i<n; ++i){
	        cin >> v[i];
	    }
	    
	    int i=0;
       int j=n-1;
    
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    
    for(int i=0; i<n; ++i){
        cout << v[i] << " ";
    }
    cout << endl;
	}
	return 0;
}
