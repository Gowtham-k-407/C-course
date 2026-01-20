#include<stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    b=((a-5)%2==0)?(a-5):(a);
    printf("%d",b);
     return 0;
}