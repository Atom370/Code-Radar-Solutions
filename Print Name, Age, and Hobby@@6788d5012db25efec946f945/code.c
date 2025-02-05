#include <stdio.h>
int main() {
    char Name[50];
    int Age;
    char Hobby[50];
    scanf("%d",&Age);
    scanf("%s %s",Name,Hobby);
    printf("Name:%s",Name);
    printf("Age:%d",Age);
    printf("Hobby:%s",Hobby);
    return 0;
}