#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 

int main(){
    int frames = 6;
    int i=1, x1, x2;
    printf("total no of frames : %d\n", frames);
    while(frames > 0){
        printf("Sending frame %d\n", i);
        x1 = rand() % 10;
        if(x1 % 2 == 0){
            for(x2=1; x2<=2; x2++){
                printf("waiting for %d seconds\n", x2);
                sleep(x2);
            }
            printf("re-sending frame %d\n", i);
        }
        printf("sending acknowledgement %d for frame %d\n", i, i);
        frames--;
        i++;
    }
    printf("Frames sending is completed \n");
    return 0;
}
