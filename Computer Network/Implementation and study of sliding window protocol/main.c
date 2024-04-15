#include<stdio.h>
int main(){
    int w, f, frames[50];
    printf("Enter window size : ");
    scanf("%d",&w);

    printf("Enter no of frames to submit : ");
    scanf("%d",&f);

    printf("Enter %d frame : ",f);
    for(int i=1; i<=f; i++){
        scanf("%d",&frames[i]);
    }

    printf("With sliding window protocol the frames be send in following manners...\n");
    printf("After sending %d frames at each state the sender will wait for ACK send by receiver \n\n",w);
    for(int i=1; i<=f; i++){
        if(i%w==0){
            printf("%d\n",frames[i]);
            printf("ACK of above frames is received by sender \n\n");
        }
        else{
            printf("%d\n",frames[i]);
        }
    }
    if(f%w!=0){
        printf("ACK of above frames is received by sender \n\n");
    }

    return 0;
}