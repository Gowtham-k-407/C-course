#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    b=(a%10)+(a/10);
    c=(b%2==0)?a:a-5;
    printf("%d",c);
     return 0;
}