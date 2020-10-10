#include<stdio.h>
int original [20],n;
void sort();
int unique();
int main()
{ 
    int cases,i,j,ans;
    printf("how many cases:"); 
    scanf("%d",&cases); 
    for(j=1;j<=cases;j++) 
    { 
        printf("\n enter array size:"); 
        scanf("%d",&n);
        printf("\n enter %d integers:",n);
        for(i=0;i<n;i++)
            scanf("%d",&original[i]); 
        sort(); 
        for(i=0;i<n;i++)
            printf("\t %d",original[i]);
        printf("\n");
        ans=unique();
        unique();
         if(ans==0)
            printf("\n not unique");
        else
            printf("\n unique");
    } 
    return 0; 
} 
void sort ()
{
    int i,j,t;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++) 
        if(original[j]>original [j+1]) 
        { 
            t=original[j]; 
            original[j]=original[j+1];
            original[j+1]=t; 
            
        } 
    
} 
int unique()
{
    int i;
    for(i=0;i<n-1;i++)
            if(original[i]==original[i+1])
                return 0; 
    return 1;
  }
