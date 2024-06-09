#include "myhead.h"
#include <string.h>
#include <stdlib.h>
#define  MAX_STUDENT 10

int compareStudentsBySID(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return strcmp(studentA->sid, studentB->sid);
}
int compareStudentsBydepartment(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return strcmp(studentA->department, studentB->department);
}
int compareStudentsByname(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return strcmp(studentA->name, studentB->name);
}
int compareStudentsBygrade(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return studentA->grade - studentB->grade;
}
void sortStudents(Student* students, int numStudents, const char* sortBy) {
    if (strcmp(sortBy, "SID") == 0) {
        qsort(students, numStudents, sizeof(Student), compareStudentsBySID);
    } else if (strcmp(sortBy, "department") == 0) {
        qsort(students, numStudents, sizeof(Student), compareStudentsBydepartment);
    } else if (strcmp(sortBy, "name") == 0) {
        qsort(students, numStudents, sizeof(Student), compareStudentsByname);
    } else if (strcmp(sortBy, "grade") == 0) {
        qsort(students, numStudents, sizeof(Student), compareStudentsBygrade);
    } else {
        // Handle invalid sortBy parameter
        printf("Invalid sortBy parameter: %s\n", sortBy);
    }
}
