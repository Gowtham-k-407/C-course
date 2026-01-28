#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char n[3];
    fgets(n, sizeof(n), stdin);
    n[strcspn(n, "\n")] = 0;
    if((int)n[0]==(int)n[1]){
        printf("%d",1);
    } else {
        printf("%d",0);
    }
    
     return 0;
}