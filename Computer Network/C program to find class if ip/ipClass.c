#include<stdio.h>
int main(){
    
    int fb;
    printf("enter frame byte : ");
    scanf("%d",&fb);

    if(fb >= 0 && fb <= 127) printf("Class A");
    else if(fb >= 128 && fb <= 191) printf("Class B");
    else if(fb >= 192 && fb <= 223) printf("Class C");
    else if(fb >= 224 && fb <= 239) printf("Class D");
    else if(fb >= 240 && fb <= 255) printf("Class E");
    else if(fb > 255 || fb < 0) printf("Enter valid range");


    return 0;
}