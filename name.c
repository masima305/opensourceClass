#include <stdio.h>

int main (void){
    
    int i;
    
    printf("please insert 1 or 2");
    scanf("%d",&i);
    
    if(i==1){
        printf("JeongHoon Lee");
    } else if (i==2){
        printf("I am a man who rich")
    } else {
        printf("fail to print (wrong input)")
    }
    return 0;
}