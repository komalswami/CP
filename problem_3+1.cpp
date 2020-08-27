#include <iostream>
using namespace std;

  
void printser(int n,int count) 
{ 
    while (n != 1) 
    { 
        
        cout << n << " "; 
  
        // If n is odd 
        if (n & 1) 
        {
            n = 3*n + 1;
         count++;
        }
        else
        {
            n = n/2;
            count++;
        }
    } 
 
    cout << n; 
    cout<<endl<<"cycle length :"<<count+1;
} 
  
 
int main() 
{ 
    int n,count=0;
    cout<<"enter a no to generate a seq.\n";
    cin>>n;
    cout<<"Number in series are :";
    printser(n,count); 
    return 0; 
} 
