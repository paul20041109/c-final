#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "myhead.h"

void printStudentsByname (Student students[], int numStudents) {
    printf("%-13s %-15s %6s      %-10s\n", "  name", " department", "grade", "SID");
    printf("------------------------------------------------\n");
    for(int i=0;i<numStudents;i++){
        printf("%-13s %-15s %4d      %-10s\n", students[i].name, students[i].department, students[i].grade, students[i].sid);
    }
}
void printStudentsBydepartment (Student students[], int numStudents) {
    printf("%-13s %-15s %6s      %-10s\n", "  name", " department", "grade", "SID");
    printf("------------------------------------------------\n");
    for(int i=0;i<numStudents;i++){
        printf("%-13s %-15s %4d      %-10s\n", students[i].name, students[i].department, students[i].grade, students[i].sid);
    }
}
void printStudentsBygrade (Student students[], int numStudents) {
    printf("%-13s %-15s %6s      %-10s\n", "  name", " department", "grade", "SID");
    printf("------------------------------------------------\n");
    for(int i=0;i<numStudents;i++){
        printf("%-13s %-15s %4d      %-10s\n", students[i].name, students[i].department, students[i].grade, students[i].sid);
    }
}
void printStudentsBySID (Student students[], int numStudents) {
    printf("%-13s %-15s %6s      %-10s\n", "  name", " department", "grade", "SID");
    printf("------------------------------------------------\n");
    for(int i=0;i<numStudents;i++){
        printf("%-13s %-15s %4d      %-10s\n", students[i].name, students[i].department, students[i].grade, students[i].sid);
    }
}
void randominitStudents (Student students[], int numStudents) {
        srand(time(NULL));

        for (int i=0; i < numStudents; i++) {
        sprintf(students[i].name, "Student %03d", i + 1);
        sprintf (students[i].department, "Department %d", rand() %5+ 1);
        students[i].grade = rand() %4 + 1;
        sprintf ((students[i]).sid, "SID%04d", rand() % 1000 + 1);
        }
}
