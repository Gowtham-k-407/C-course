#include<stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    d=((b%2!=0) && (c%2!=0))?a-5:a;
    printf("%d",d);
     return 0;
}