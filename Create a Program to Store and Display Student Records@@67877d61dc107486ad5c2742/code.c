#include <stdio.h>
struct student{
        int rono;
        char name;
        float marks;
    }
int main(){
    
    struct student stud[1000];
    int n;
    scanf("%d",n);
    for(int i=0;i<n;i++){
        scanf("%d",stud[i].rono);
        scanf("%c",stud[i].name);
        scanf("%f",stud[i].marks);
          }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d ,",stud[i].rono);
        printf("Name: %c,",stud[i].name);
        printf("Marks: %f",stud[i].marks);
    }
    return 0;
}
