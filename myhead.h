#ifndef MYHEAD_H
#define MYHEAD_H

#include <stdio.h>

typedef struct {
    char name[50];
    char department[50];
    int grade;
    char sid[50];

} Student;

void randominitStudents (Student students[], int numStudents);

//void sortStudentsByname(Student* students, int numStudents);
//void sortStudentsBydepartment(Student* students, int numStudents);
//void sortStudentsBygrade(Student* students, int numStudents);
//void sortStudentsBySID(Student* students, int numStudents);
void sortStudents(Student* students, int numStudents, const char* sortBy);

void printStudentsByname(Student students[], int numStudents);
void printStudentsBydepartment(Student students[], int numStudents);
void printStudentsBygrade(Student students[], int numStudents);
void printStudentsBySID(Student students[], int numStudents);

#endif // MYHEAD_H
