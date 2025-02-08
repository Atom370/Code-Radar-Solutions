#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x=y=z){
        printf("Equilateral");
    }
    else if(x!=y!=z){
        printf("Scalene");
    }
    else(x=y!=z && x!=z=y){
        printf("Isosceles");
    }
    return 0;
}