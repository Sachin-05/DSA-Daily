#include<iostream>
#include<vector>

using namespace std;

void matrixMult(vector<vector<int>> A, vector<vector<int>> B){
//     Write your code here.
      int n1 = A.size(); // rows of vector A
      
      int m1 = A[0].size(); // colms of vector A

      int n2 = B.size();
      int m2 = B[0].size();

      if(m1!=n2){
           cout << "Invalid input\n";
           return;
      }
    
      vector <vector<int>> ans(n1, vector <int> (m2));
      
      for(int i=0; i<n1; ++i){
          for(int j=0; j<m2; ++j){
              for(int k=0; k<m1; ++k){
                  ans[i][j] += (A[i][k]*B[k][j]);
              }
          }
      }

      for(int i=0; i<n1; ++i){
          for(int j=0; j<m2; ++j){
              cout << ans[i][j] << " ";
          }
          cout << "\n";
      }
}

int main(){
    int r1;
    int c1;
    cin>>r1;
    cin>>c1;

    vector<vector<int>> mat1;
    for(int i= 0; i< r1; i++){
        vector<int> arr;
        for(int j= 0; j< c1; j++){
            int ele;
            cin>> ele;
            arr.push_back(ele);
        }
        mat1.push_back(arr);
    }

    int r2;
    int c2;
    cin>>r2;
    cin>>c2;

    vector<vector<int>> mat2;
    for(int i= 0; i< r2; i++){
        vector<int> arr;
        for(int j= 0; j< c2; j++){
            int ele;
            cin>> ele;
            arr.push_back(ele);
        }
        mat2.push_back(arr);
    }

    matrixMult(mat1, mat2);
}
