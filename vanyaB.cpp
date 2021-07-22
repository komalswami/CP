#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,h,k,cnt=0;
    //cin>>n>>h>>k;
    scanf("%d %d %d",&n,&h,&k);
    int a[n];
    
    for(int i=0;i<n;i++){
    //    cin>>a[i];
    scanf("%d",&a[i]);
    }
 for(int j=0;j<n;j++){
        if(a[j]<h){
            while(a[j]!=0){
            a[j]=a[j]-k;
            cnt=cnt+1;
            }
        }
    }

    //cout<<cnt;
    printf("%d",cnt);
    return 0;
}
