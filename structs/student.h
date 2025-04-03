#ifndef STUDENT_H_
#define STUDENT_H_

typedef struct Student_struct
{
    char name[20];
    char id[20];
    double gpa;
} Student;

Student InitStudent();
Student SetName(char *name, Student s);
Student SetID(char *id, Student s);
Student SetGPA(double gpa, Student s);
void GetName(char *studentName, Student s);
void GetID(char *studentID, Student s);
double GetGPA(Student s);

#endif