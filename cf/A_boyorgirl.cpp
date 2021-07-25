#include<iostream>
using namespace std;
int main()
{
    int cnt=0;
    string one;
    cin>>one;
    
    for(int i=0;i<one.size();i++){
        cnt++;
    }
    if(cnt%2!=0){
        std::cout << "IGNORE HIM!" << std::endl;
    }else{
        cout<<"CHAT WITH HER!";
    }
}
