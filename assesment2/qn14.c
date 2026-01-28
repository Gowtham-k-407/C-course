#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int z=a/100,o=(a%100);
    if(z==o){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    
     return 0;
}