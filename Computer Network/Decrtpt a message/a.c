#include<stdio.h>
#include<stdlib.h>

int main(){
    char msg[30], ch;
    int key;
    printf("Enter a message : ");
    scanf("%s", msg);
    printf("Enter key : ");
    scanf("%d", &key);

    for(int i = 0; msg[i] != '\0'; i++){
        ch = msg[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - key; 
            if(ch < 'a'){
                ch = ch + 'z' -'a' + 1;
            }
            msg[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){ 
            ch = ch - key; 
            if(ch < 'A'){
                ch = ch + 'Z' -'A' + 1;
            }
            msg[i] = ch;
        }

        // msg[i] = ch;
    }
    printf("Decrypted message is : %s", msg);
    return 0;
}
