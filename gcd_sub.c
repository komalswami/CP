#include <stdio.h>
int hcf(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2) {
    if(n1==n2)
        return n1;
    else
        if(n1>n2)
            return hcf(n1-n2,n2);
        else
            return hcf(n1,n2-n1);
}



