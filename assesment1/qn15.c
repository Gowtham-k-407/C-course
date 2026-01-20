#include<stdio.h>

int main() {
    int a,b,c,d,e,f;
    scanf("%d",&a);
    c=a%100;
    d=a/100;
    e=((c%10)*10)+(c/10);
    f=(d*100)+e;
    printf("%d",f);
    return 0;
}