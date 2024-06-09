#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  MAX_STUDENT 10
#include "myhead.h"
int main()
{
    Student students[MAX_STUDENT];
    randominitStudents(students, MAX_STUDENT);

    sortStudents(students, MAX_STUDENT, "name");
    printStudentsByname(students, MAX_STUDENT);
   
    sortStudents(students, MAX_STUDENT, "department");
    printStudentsBydepartment(students, MAX_STUDENT);

    sortStudents(students, MAX_STUDENT, "grade");
    printStudentsBygrade(students, MAX_STUDENT);

    sortStudents(students, MAX_STUDENT, "SID");
    printStudentsBySID(students, MAX_STUDENT);

    return 0;
}
