#include<stdio.h>
#include<stdlib.h>
int main(){
    char msg[30], ch;
    int key;
    printf("Enter a message : ");
    scanf("%s", msg);
    printf("Enter key : ");
    scanf("%d", &key);

    
    for(int i=0; msg[i]!= '\0'; i++){
        ch = msg[i];
        if(ch >= 'a' && ch <= 'z'){
            ch -= key;
            // if(ch > 'z'){
            //     ch = ch - 'z' + 'a' - 1; 
            // }
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch -= key;
            // if(ch > 'Z'){
            //     ch = ch - 'Z' + 'A' - 1; 
            // }
        }
        msg[i] = ch;
    }
    printf("decrypted message is : %s",msg);
    return 0;
}
