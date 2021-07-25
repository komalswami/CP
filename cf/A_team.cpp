#include<iostream>
using namespace std;
int main()
{
    int n,finc=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1)
            {
                cnt=cnt+1;
            }
        }
        if(cnt>=2){
            finc++;
        }
    }
    cout<<finc;
    return 0;
}
