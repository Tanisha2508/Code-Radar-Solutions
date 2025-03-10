// Your code here...
#include <stdio.h>
//program for read and display the information of all students in a class

struct Student{
    int rollNumber;
    char name[50];
    float marks;
};

void inputStudentInfo(struct Student *s) {

    printf("Enter student details:\n");
    printf("Roll Number: ");
    scanf("%d", &s->rollNumber);

    printf("Name: ");
    getchar();
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Marks: ");
    scanf("%f", &s->marks);
}

void displayStudentInfo(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudentInfo(&students[i]);
    }

    printf("\nDisplaying all student information:\n");
    for (int i = 0; i < n; i++) {
        displayStudentInfo(students[i]);
    }

    return 0;
}



