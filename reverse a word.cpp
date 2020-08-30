#include<string.h>
#include<iostream>  
#include <bits/stdc++.h> 
using namespace std; 

string reverseString(string str) 
{ 
    reverse(str.begin(), str.end()); 
  
    str.insert(str.end(), ' '); 
  
    int n = str.length(); 
  
    int j = 0; 
 
    for (int i = 0; i < n; i++) { 
 
        if (str[i] == ' ') { 
            reverse(str.begin() + j, 
                    str.begin() + i); 
  
            j = i + 1; 
        } 
    } 
 
    str.pop_back(); 
  
    return str; 
} 
int main() 
{ 
    string str;
    getline(cin,str);
  
    // Function call 
    string rev = reverseString(str); 
  
    // Print the reversed string 
    cout << rev; 
    return 0; 
} 
