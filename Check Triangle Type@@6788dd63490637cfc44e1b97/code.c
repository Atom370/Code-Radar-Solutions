#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x=y=z){
        printf("Eqilateral");
    }
    else if(x!=y!=z){
        printf("Scalene");
    }
    else{
        printf("Isosceles");
    }
    return 0;
}