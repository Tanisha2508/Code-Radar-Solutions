#include <stdio.h>
int main() {
    char ch[50];
    scanf("%s",&ch);
    int age;
    scanf("%d",&age);
    char ht[100];
    scanf("%s",&ht);
    printf("Name: %s", ch);
    printf("Age: %d",age);
    printf("Hobby: %s",ht);
    return 0;
}