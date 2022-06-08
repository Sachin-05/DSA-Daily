#include<iostream>
using namespace std;

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
    int lo = 0;
    int hi = n-1;
    
    int ceil;
    int floor;

    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(data > arr[mid]){
            lo = mid+1;
            floor = arr[mid];
        }
        else if(data < arr[mid]){
            hi = mid-1;
            ceil = arr[mid];
        }
        else{
            ceil = arr[mid];
            floor = arr[mid];
            break;
        }
    }
    cout << ceil << endl;
    cout << floor << endl;
}
