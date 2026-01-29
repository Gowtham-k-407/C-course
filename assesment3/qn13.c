#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int d0=a%100, d1=(a%100)/10;
    if(d0==d1){
        printf("Success");
    }
    else{
        printf("Failure");
    }
    
     return 0;
}