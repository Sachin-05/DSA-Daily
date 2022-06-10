#include<bits/stdc++.h>
using namespace std;

vector<int> fillOnedFromShell(vector<vector<int>> & arr , int s ){
    int minr = s -1;
    int minc = s -1;
    int maxr = arr.size() - s;
    int maxc = arr[0].size() -s;
    
    int n = 2 * (maxr - minr) + 2 * (maxc - minc);
    vector<int> oned(n);
    int idx = 0;
    // lw 
    for(int i = minr , j= minc ; i <= maxr ; i++){
        oned[idx] = arr[i][j];
        idx++;
    }
    
    //bw
    for(int i = maxr , j= minc + 1 ; j <= maxc ; j++){
        oned[idx] = arr[i][j];
        idx++;
    }
    
    
    //rw
    for(int i = maxr -1  , j= maxc ; i >= minr ; i--){
        oned[idx] = arr[i][j];
        idx++;
    }
    
    //tw
    for(int i = minr , j= maxc -1 ; j >= minc + 1 ; j--){
        oned[idx] = arr[i][j];
        idx++;
    }
    
    return oned;
}

void reverse(vector<int> &oned , int li , int ri){
    while(li < ri){
        int temp = oned[li];
        oned[li] = oned[ri];
        oned[ri] = temp;
        
        
        li++;
        ri--;
    }
}

void rotate(vector<int> & oned , int r){
    int sz = oned.size();
    
    r = r % sz;
    if(r < 0){
        r += sz;
    }
    
    reverse(oned , 0 , oned.size() - 1 -r );
    reverse(oned ,  oned.size() -r , oned.size() - 1);
    reverse(oned , 0 , oned.size() - 1 );
}

void fillShellFromOned(vector<vector<int>> &arr , int s , vector<int> &oned){
    int minr = s -1;
    int minc = s -1;
    int maxr = arr.size() - s;
    int maxc = arr[0].size() -s;
    
    int idx = 0;
    // lw 
    for(int i = minr , j= minc ; i <= maxr ; i++){
        arr[i][j] = oned[idx];
        idx++;
    }
    
    //bw
    for(int i = maxr , j= minc + 1 ; j <= maxc ; j++){
        arr[i][j] = oned[idx];
        idx++;
    }
    
    
    //rw
    for(int i = maxr -1  , j= maxc ; i >= minr ; i--){
        arr[i][j] = oned[idx];
        idx++;
    }
    
    //tw
    for(int i = minr , j= maxc -1 ; j >= minc + 1 ; j--){
        arr[i][j] = oned[idx];
        idx++;
    }
    

}

void rotateShell(vector<vector<int>> &arr , int s , int r){
    
    vector<int> oned = fillOnedFromShell(arr , s);
    rotate(oned , r);
    fillShellFromOned(arr , s , oned);
}

void display(vector<vector<int>>&arr){
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n, m, s, r;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    cin >> s >> r;

    rotateShell(arr , s , r);
    display(arr);
    
}
