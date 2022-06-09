#include <iostream>
using namespace std;



int main(int argc, char** argv)
{

  int n, m;
  cin >> n >> m;

  int mat[n][m];
  for(int i=0; i<n; ++i){
    for(int j=0; j<m; ++j){
    cin >> mat[i][j];
    }
  }
  // write your code here
  int minrow = 0;
  int mincol =  0;
  int maxrow = n-1;
  int maxcol = m-1;

   int tne = n*m; // total number of elements
   int cnt = 0;

   while(cnt < tne){
     // left wall
     if(cnt<tne){
     for(int i=minrow; i<=maxrow; ++i){
           cout << mat[i][mincol] << endl;
           cnt++;
     }
     }
     mincol++;

     // bottom wall
     if(cnt <tne){
     for(int i=mincol; i<=maxcol; ++i){
           cout << mat[maxrow][i] << endl;
           cnt++;
     }
     }
     maxrow--;

     // right wall
     if(cnt < tne){
     for(int i=maxrow; i>=minrow ; i--){
           cout << mat[i][maxcol] << endl;
           cnt++;
     }
     }
     maxcol--;

     // top wall
     if(cnt < tne){
     for(int i=maxcol; i>=mincol ; i--){
           cout << mat[minrow][i] << endl;
           cnt++;
     }
     }
     minrow++;
   }
}
