#include<stdio.h>
int sum(int a){
    int s=0,d;
    while(a>0){
           d=a%10;
           s+=d;
           a/=10;
        }
        return s;
}

int main() {
    int a,s;
    scanf("%d",&a);
    s=sum(a);
    while(s>9){
        s=sum(s);
    }
    printf("%d",s);
     return 0;
}