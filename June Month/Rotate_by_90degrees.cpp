#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(int n, vector<vector<int>> &arr)
{
    // write your code here
    // first we will find the transpose of a matrix

    for(int i=0; i<n; ++i){
        for(int j=0; j<i ; ++j){
            swap(arr[i][j],arr[j][i]);
        }
    }
// now we will swap the each row with them
    for(int i=0; i<n; ++i){
        for(int j=0; j<n/2; ++j){
            swap(arr[i][j],arr[i][n-1-j]);
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    rotate(n, arr);
}
