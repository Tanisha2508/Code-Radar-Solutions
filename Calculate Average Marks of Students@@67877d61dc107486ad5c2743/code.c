// Your code here...
#include <stdio.h>
struct student{
    int roll_num;
    float marks;
    char name[50];
};
struct student stud[1000];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    for(int i=1;i<=n;i++){
        scanf("%d",&stud[i].roll_num);
        scanf("%s",name);
        scanf("%f",&stud[i].marks);
    }
    for(int j=1;j<=n;j++){
        printf("%d %s %.2f",roll_num,name,marks)
    }
    }
    printf("\n");
    
}