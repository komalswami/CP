#include <iostream>
using namespace std;
int main()
{
    int count=0,n;
    cin>>n;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            count++;
            cout<<n<<" ";
        }
        else
        {
            n=3*n+1;
            count++;
            cout<<n<<" ";
        }
    }

    cout<<endl<<count;
}