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
            ch = 'a' + (ch - 'a' + key) % 26; 
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = 'A' + (ch - 'A' + key) % 26; 
        }
        msg[i] = ch;
    }
    printf("Encrypted message is : %s", msg);
    return 0;
}
