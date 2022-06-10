#include <iostream>
#include <vector>
using namespace std;

void saddle_point(int n, vector<vector<int>> &arr)
{
    // write your code here
    bool f1 = false;

    for(int i=0; i<n; ++i){
        bool f2 = true;
        int minj = 0;
        for(int j=0; j<n; ++j){
            if(arr[i][j] < arr[i][minj]){
                minj = j;
            }
        }
       // comparison for the max ele. in colm
        for(int ii=0; ii<n; ++ii){
            if(arr[ii][minj]>arr[i][minj]){
                f2 = false;
                break;
            }
        }

        if(f2){
            cout << arr[i][minj] << endl;
            f1 = true;
            break;
        }
    }
    if(!f1){
        cout << "Invalid input\n";
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
    
    saddle_point(n, arr);
}
