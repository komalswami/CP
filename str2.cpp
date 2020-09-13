#include<iostream>
#include<string.h>
using namespace std;
int main (){
    string str;
    int count = 0;
getline(cin,str);
    for (int i = 0; str[i] != '\0';i++){
        if (str[i] == ' ')
            count++;
    }
  cout << "Number of words in the string are: " << count + 1;
  return 0;
}
