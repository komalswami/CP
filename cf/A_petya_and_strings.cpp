#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string one,two;
    cin>>one;
    cin>>two;
    
    for(int i=0;i<one.size();i++){
        one[i]=tolower(one[i]);
    }
    
    for(int i=0;i<two.size();i++){
        two[i]=tolower(two[i]);
    }
   // cout<<one<<" "<<two;
    
    if(one == two){
        cout<<"0";
    }
    else{
        if(one>two){
            cout<<"1";
        }
        else
            cout<<"-1";
    }
    return 0;
}

