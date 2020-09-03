#include<iostream>
#include<vector>
using namespace std;
char a[100][100];
int rows,cols;
int isinside(int i,int j)
{
    return(i>=0 && i<rows && j>=0 && j<cols);
}

void increment(int i,int j)
{
    if(isinside(i,j) && a[i][j]!=-1)
        a[i][j]++;
}

void setmine(int i,int j)
{
    a[i][j]=-1;
    for(int m=-1;m<1;m++)
        for(int n=-1;n<1;n++)
            increment(j+m,j+n);
}

void printres()
{
    for(int i=0;i<rows-1;i++)
    {
        for(int j=0;j<cols-1;j++)
        {
            char x=a[i][j];
            if(x==-1)
                cout<<"*";
            else
                cout<<x;
        }
    }
}
int main()
{
    cin>>rows>>cols;
    int i,j;
    a[i][j]=0;
    for(i=0;i<rows-1;i++)
    {
        
        for(j=0;j<cols-1;j++)
        {
            char currentchar=cin>>a[i][j];
            if(currentchar=="*")
                setmine(i,j);
        }
    }
    printres();
}
