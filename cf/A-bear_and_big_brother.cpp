#include<iostream>
using namespace std;
int main()
{
    int a,b,cnt=0;
    cin>>a>>b;
    
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        cnt=cnt+1;
    }
    if(a>b)
    {
        cout<<cnt;
    }
    return 0;
}
