#include<iostream>
#include<string>
using namespace std;
int main()
{
    string one;
    cin>>one;
    int cnt1=0;
    for(int i=0;i<one.size();i++){
        if(isupper(one[i]))
            cnt1=cnt1+1;
    }
    if(cnt1>one.size()/2){
        for(int j=0;j<one.size();j++)
            one[j]=toupper(one[j]);
    }
    else
    {
        for(int j=0;j<one.size();j++)
            one[j]=tolower(one[j]);
    }
    std::cout << one << std::endl;
    return 0;
}
