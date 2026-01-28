#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int z=a/1000,o=(a%100)%10;
    if(z!=o){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    
     return 0;
}