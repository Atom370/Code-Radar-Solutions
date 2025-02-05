#include <stdio.h>
int main() {
    char Name[50];
    int Age;
    char Hobby[50];
    scanf("%d",&Age);
    scanf("%c %c",Name,Hobby);
    printf("Name:%c",Name);
    printf("Age:%d",Age);
    printf("Hobby:%c",Hobby);
    return 0;
}