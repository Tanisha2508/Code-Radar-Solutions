// Your code here...
#include <stdio.h>
struct student{
    int roll_num,i;
    float marks;
    char name[50];
};
struct student stud[1000];
int main(){
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(i=1;i<=n;i++){
        scanf("%d",&stud[i].roll_num);
        scanf("%s",stud[i].name);
        scanf("%f",&stud[i].marks);
    }
    }
    printf("Average Marks: %.2f",stud[i].marks);
    printf("\n");
    return 0;
}