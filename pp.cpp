#include <bits/stdc++.h> 
using namespace std;

int minDeletion(string str) 
{ 

    int n = str.length(); 
 
    
    int firstIdx1 = -1; 
 
    
    int lastIdx0 = -1; 
 

    for(int i = 0; i < n; i++)
    { 
        if (str[i] == '1')
        { 
            firstIdx1 = i; 
            break; 
        } 
    } 

    for(int i = n - 1; i >= 0; i--) 
    { 
        if (str[i] == '0') 
        { 
            lastIdx0 = i; 
            break; 
        } 
    } 

    if (firstIdx1 == -1 || 
         lastIdx0 == -1) 
        return 0; 
 
    
    int count1 = 0, count0 = 0; 
 
    for(int i = 0; i < lastIdx0; i++)
    { 
        if (str[i] == '1')
        { 
            count1++; 
        } 
    } 
 
     
    for(int i = firstIdx1 + 1; i < n; i++) 
    { 
        if (str[i] == '1')
        { 
            count0++; 
        } 
    } 
 
   
    return min(count0, count1); 
}
int main() 
{
    string str = "1000101";
     
  
    cout << minDeletion(str);
     
    return 0;
}
 
