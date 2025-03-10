#include <stdio.h>
int main(){
    structure student{
        int rono;
        char name;
        float marks;
    }
    int n;
    scanf("%d",n);
    for(int i=0;i<n;i++){
        scanf("%d",stud[i].rollno);
        scanf("%c",stud[i].name);
        scanf("%f",stud[i].marks);
          }
    for(int i=0;i<n;i++){
        printf("%d",stud[i].rollno);
        printf("%c",stud[i].name);
        printf("%f",stud[i].marks);
    }
    return 0;
}
