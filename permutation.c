#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80];
    int i,j,n,t;
    printf("\nhow many cases? :");
    scanf("%d",&n);
    while(n--)
    {
        printf("\nenter 1st string:");
        scanf("%s",a);
        printf("\nenter 2nd string:");
        scanf("%s",b);
        for(i=0;a[i]!='\0';i++)
        {
            for(j=0;b[j]!='\0';j++)
                if(a[i]==b[j])
                {
                    printf("%c",a[i]);
                    break;
                }
        }
    }
    return 0;
}
