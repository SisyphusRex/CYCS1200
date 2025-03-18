#include <stdio.h>
#include <string.h>

#include "student.h"

Student InitStudent()
{
    Student newS;
    strcpy(newS.name, "Louie");
    strcpy(newS.id, "000000");
    newS.gpa = 0.0;
    return newS;
}

Student SetName(char *name, Student s)
{
    strcpy(s.name, name);
    return s;
}

Student SetID(char *id, Student s)
{
    strcpy(s.id, id);
    return s;
}

Student SetGPA(double gpa, Student s)
{
    s.gpa = gpa;
    return s;
}

void GetName(char *studentName, Student s)
{
    strcpy(studentName, s.name);
}

void GetID(char *studentID, Student s)
{
    strcpy(studentID, s.id);
}

double GetGPA(Student s)
{
    return s.gpa;
}