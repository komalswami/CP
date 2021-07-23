/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0;
    string stri;
    
    cin>>n;
    cin>>stri;
    
    for(int i=0;i<stri.size();i++)
    {
        if(stri[i]=='A')
        {
          cnt1++;  
        }
        else
        {
            cnt2++;
        }
    }
    if(cnt1>cnt2){
        cout<<"Anton";
    }
    else if(cnt1<cnt2)
    {
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    
    return 0;
}
