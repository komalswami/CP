#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int a[n],lucky=0,unlucky=0;
	for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
	    if(a[i]%2==0){
	        lucky++;
	    }
	    else{
	        unlucky++;
	    }
	}
	    if(lucky>unlucky){
	        printf("READY FOR BATTLE");
	    }
	    else{
	        printf("NOT READY");
	    }
	return 0;
}

