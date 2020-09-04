#include <bits/stdc++.h> 
using namespace std; 
  
#define SIZE 10 
  

void sortMat(int mat[SIZE][SIZE], int n) 
{ 
    // temporary matrix of size n^2 
    int temp[n * n]; 
    int k = 0; 
  
    // copy the elements of matrix one by one 
    // into temp[] 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            temp[k++] = mat[i][j]; 
  
    // sort temp[] 
    sort(temp, temp + k); 
      
    // copy the elements of temp[] one by one 
    // in mat[][] 
    k = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            mat[i][j] = temp[k++]; 
} 
  
// function to print the given matrix 
void printMat(int mat[SIZE][SIZE], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            cout << mat[i][j] << " "; 
        cout << endl; 
    } 
} 
int main() 
{ 
 int a[SIZE][SIZE],n, i, j,cases;
    cin>>cases;
    while(cases-->0){
   cin>>n;
   for(i=0; i<n; i++)
   {
       for(j=0; j<n; j++)
           cin>>a[i][j];
   }
  
    sortMat(a, n); 
  
    
    printMat(a, n);
    cout<<endl;
    }
    return 0; 
} 
