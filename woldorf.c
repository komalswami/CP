#include<stdio.h>
#include<string.h>
int t,n,m,k,len,r,c;
char grid[100][100],word[100];
int x[]={-1,-1,-1,0,0,1,1,1};
int y[]={-1,0,1,-1,1,-1,0,1};
int cases(char c,char d)
{
    if(c==d)
        return 1;
    if(c>='A' && c<='Z' && c==(d+'A'-'a'))
        return 1;
    if(c>='a' && c<='z' && d==(c+'A'-'a'))
        return 1;
      return 0;
}
int search(int r,int c)
{
    int i,rt,k,ct;
    for(i=0;i<8;i++)
    {
        rt=r;
        ct=c;
        for(k=0;k<len;k++)
        {
            if(rt>=n || rt<0 || ct>=m || ct<0)
                break;
            if(!cases(grid[rt][ct],word[k]))
                break;
            rt+=x[i];
            ct+=y[i];
        }
            if(k==len)
                return 1;
    }
        return 0;
}
void init()
{
    for(r=0;r<n;r++)
        for(c=0;c<m;c++)
        {
            if(search(r,c))
                return;
        }
}
int main()
{
    int u,i;
    printf("how many test cases?");
    scanf("%d",&t);
    while(t--)
    {
        printf("\n how many rows and cols?");
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%s",grid[i]);
        printf("how many words?");
        scanf("%d",&k);
        for(i=0;i<k;i++)
        {
            printf("enter word %d",i+1);
            scanf("%s",word);
            len=strlen(word);
            init();
            printf("%d %d\n",r+1,c+1);
        }
    }

}
