#include <stdio.h>
int main() {
    char Name[50];
    int Age;
    char Hobby[50];
    scanf("%s",Name);
    scanf("%d",&Age);
    scanf("%s",Hobby);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s",Hobby);
    return 0;
}