#include <stdio.h>
#include "Student.h"

int main() {
    // Student information
    Student student;

    // Initialize with sample data
    double grades[5] = {85.5, 90.0, 76.5, 88.0, 92.0};
    initializeStudent(&student, "Alice Johnson", 123456, grades);

    // Display student information
    displayStudentInfo(&student);

    // Calculate and display average grade
    double average = calculateAverageGrade(&student);
    printf("Average Grade: %.2f\n", average);

    return 0;
}
