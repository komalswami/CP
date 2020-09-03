#include<iostream>
#include<vector>
using namespace std;
int a[100][100];
int rows,cols;
void clearField()
{
int i,j;
for(i=0;i<rows;i++){
for(j=0;j<cols;j++)
{
a[i][j]=0;
}
}
}
void setbound(int r,int c)
{
rows=r;
cols=c;
}
int isinside(int i,int j)
{
return i>=0 && i<rows && j>=0 && j<cols;
}
void increment(int i,int j)
{
if(isinside(i,j)&&a[i][j]!=-1)
++a[i][j];
}
void setmine(int i,int j)
{
a[i][j]=-1;
int m,n;
for(m=-1;m<=1;m++)
{
for(n=-1;n<=1;n++)
{
increment(i+m,j+n);
}
}
}

void printres()
{
int i,j;
for(int i=0;i<rows;i++)
{
for(int j=0;j<cols;j++)
{
int x=a[i][j];
if(x==-1)
cout<<"*";
else
cout<<x;
}
cout<<endl;
}
}

int main()
{
int r,c;
for(;;)
{
cin>>r>>c;
if(r==0 && c==0)
{
break;
}
setbound(r,c);
clearField();

int i;
for(i=0;i<r;i++){
char input[c+1];
cin>>input;

int j;
for(j=0;j<c;j++)
{
char currentChar=input[j];
if(currentChar=='*')
{
setmine(i,j);
}
}
}
printres();

}
return 0;
}
