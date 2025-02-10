#include <stdio.h>


int main() {
    int num,i;
    int isprime=1;
    scanf("%d",&num);
    if(num<=1){
        isprime=0;
    }else{
        for(i=2; i*i<=num;i++){
            if(num%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }

    return 0;
}
        
        