#include<stdio.h>

int main() {
    int a,s,h,o;
    scanf("%d",&a);
    h=a/100;;
    o=a%10;;
    s=(h*100)+o;
    printf("%d",s);
     return 0;
}