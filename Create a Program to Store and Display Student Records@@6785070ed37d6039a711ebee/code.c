#include<stdio.h>
int main(){
    struct student{
        int rollno;
        char name[50];
        float marks;
    };
    struct student stud[1000];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&stud[i].rollno);
    scanf("%s",stud[i].name);
    scanf("%f",&stud[i].marks);
}
for(int i=0;i<n;i++){
    printf("Roll Number: %d,",stud[i].rollno);
    printf("\n Name: %s,",stud[i].name);
    printf("\n Marks: %f",stud[i].marks);
}
return 0;
}


