//
// Created by Divagar Vakeesan on 2024-09-12.
//

#ifndef STUDENT_H
#define STUDENT_H

// Define a structure for a Student
typedef struct {
    char name[50];
    int studentID;
    double grades[5];  // Array to store grades for 5 courses
} Student;

// Function prototypes
void initializeStudent(Student* student, const char* name, int studentID, double grades[]);
void displayStudentInfo(const Student* student);
double calculateAverageGrade(const Student* student);

#endif
