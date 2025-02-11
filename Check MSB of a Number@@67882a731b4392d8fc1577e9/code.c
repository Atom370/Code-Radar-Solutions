#include <stdio.h>


int main() {
    unsigned int number;
    scanf("%u",&number);
    unsigned int msb = number>>31;
    if(msb==1){
        printf("Set");
    }else{
        printf("Not Set");
    }

    return 0;
}