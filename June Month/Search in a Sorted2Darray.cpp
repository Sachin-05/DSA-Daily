#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    // will always be a n*n matrix
    // write your code here
    // using binary search
    // starting from top right corner
    int n = matrix.size();
    
    int r = 0 ;
    int c = n-1;

    while(r<n && c>=0){
        if(matrix[r][c]==target){
            cout << r << endl << c << endl;
            return true;
        }else if(matrix[r][c]>target){
               c--; 
        }else{
            r++;
        }
    }
    return false;
}

int main() 
{
    int n, target;
    cin>>n;
    vector<vector<int>> mat(n, vector<int> (n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>mat[i][j];
    cin>>target;

    if(!searchMatrix(mat, target)) cout<<"Not Found\n";
}
