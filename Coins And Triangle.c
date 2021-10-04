#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    long int N;
	    scanf("%ld",&N);
	    long int s=1+(8*N);
	    long int n=(-1+sqrt(s))/2;
	    printf("%ld\n",n);
	}
	return 0;
}

