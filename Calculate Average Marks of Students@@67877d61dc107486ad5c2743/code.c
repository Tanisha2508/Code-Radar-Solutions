// Your code here...
#include <stdio.h>
struct student{
    int roll_num;
    float marks;
    char name[50];
};
struct student stud[1000];
int main(){
    int n,i;
    float sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(i=1;i<=n;i++){
        scanf("%d",&stud[i].roll_num);
        scanf("%s",stud[i].name);
        scanf("%f",&stud[i].marks);
        sum += stud[i].marks;
    }
    float average marks = sum/n;

    }
    printf("Average Marks: %.2f",average marks);
    printf("\n");
    return 0;
}