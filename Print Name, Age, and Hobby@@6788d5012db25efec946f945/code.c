#include <stdio.h>
int main() {
    int Age;
    char Name[50];
    char Hobby[50];
    scanf("%d",&Age);
    scanf("%c %c",Name,Hobby);
    printf("Name:%c",Name);
    printf("Age:%d",Age);
    printf("Hobby:%c",Hobby);
    return 0;
}