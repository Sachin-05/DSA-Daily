// Approach 1 : coutning the number of 0's, 1's and 2's and the printing accordingly

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int cnt0=0;
        int cnt1=0;
        int cnt2 = 0;
        for(int i=0; i<n; ++i){
            if(a[i]==0){
                cnt0++;
            }else if(a[i]==1){
                cnt1++;
            }else{
                cnt2++;
            }
        }
        int i=0;
        while(cnt0>0){
            a[i] = 0;
            i++;
            cnt0--;
        }
        
        while(cnt1>0){
            a[i]=1;
            i++;
            cnt1--;
        }
        
        while(cnt2>0){
            a[i] = 2;
            i++;
            cnt2--;
        }
    }
    
};



// DUTCH NATIONAL FALG ALGORITHM SE AUR OPTIMIZATION KIYA HAI

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int cnt0=0;
        int cnt1=0;
        int cnt2 = 0;
        for(int i=0; i<n; ++i){
            if(a[i]==0){
                cnt0++;
            }else if(a[i]==1){
                cnt1++;
            }else{
                cnt2++;
            }
        }
        int i=0;
        while(cnt0>0){
            a[i] = 0;
            i++;
            cnt0--;
        }
        
        while(cnt1>0){
            a[i]=1;
            i++;
            cnt1--;
        }
        
        while(cnt2>0){
            a[i] = 2;
            i++;
            cnt2--;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends


// } Driver Code Ends
