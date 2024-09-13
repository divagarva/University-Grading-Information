//
// Created by Divagar Vakeesan on 2024-09-12.
//
#include <stdio.h>
#include <string.h>
#include "Student.h"

// Function to initialize student details
void initializeStudent(Student* student, const char* name, int studentID, double grades[]) {
    strncpy(student->name, name, sizeof(student->name) - 1);
    student->studentID = studentID;
    for (int i = 0; i < 5; i++) {
        student->grades[i] = grades[i];
    }
}

// Function to display student information
void displayStudentInfo(const Student* student) {
    printf("Student Name: %s\n", student->name);
    printf("Student ID: %d\n", student->studentID);
    printf("Grades: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", student->grades[i]);
    }
    printf("\n");
}

// Function to calculate the average grade
double calculateAverageGrade(const Student* student) {
    double total = 0.0;
    for (int i = 0; i < 5; i++) {
        total += student->grades[i];
    }
    return total / 5.0;
}
