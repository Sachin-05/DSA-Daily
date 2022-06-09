#include<iostream>
using namespace std;

int firstindex(int* arr, int n, int data){
    int lo =0;
    int hi = n-1;
    int fi = -1;

    while(lo<=hi){
         int mid = (lo+hi)/2;
         if(arr[mid]<data){
             lo = mid+1;
         }else if(arr[mid]>data){
             hi = mid-1;
         }else{
             fi = mid;
             hi = mid - 1;
         }
    }
    return fi;
}

int lastindex(int* arr, int n, int data){
    int lo =0;
    int hi = n-1;
    int li = -1;

    while(lo<=hi){
         int mid = (lo+hi)/2;
         if(arr[mid]<data){
             lo = mid+1;
         }else if(arr[mid]>data){
             hi = mid-1;
         }else{
             li = mid;
             lo = mid + 1;
         }
    }
    return li;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    cout << firstindex(arr, n, data) << endl;
    cout << lastindex(arr, n , data) << endl;
    
}
