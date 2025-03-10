// Your code here...
#include <stdio.h>
#include <string.h>
//program for read and display the information of all students in a class

struct Student{
    int rollNumber;
    char name[50];
    float marks;
};
void inputStudentInfo(struct Student *s) {
    scanf("%d", &s->rollNumber);
    getchar();
    fgets(s->name,sizeof(s->name),stdin);
    s->name[strcspn(s->name, "\n")] = '\0';
    scanf("%f", &s->marks);
}

void displayStudentInfo(struct Student s) {
    printf("Roll Number: %d,", s.rollNumber);
    printf(" Name: %s,", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        inputStudentInfo(&students[i]);
    }
    for (int i = 0; i < n; i++) {
        displayStudentInfo(students[i]);
    }

    return 0;
}



