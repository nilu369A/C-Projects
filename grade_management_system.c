// a program to Create a grade management system that allows a teacher to enter the marks of students for multiple subjects and calculates their average grade

#include <stdio.h>

int main()
{

    int num_of_students, num_of_subjects, marks, total_marks, average_marks;

    printf("Enter the number of students : \n");
    scanf("%d", &num_of_students);

    printf("Enter the number of subjects : \n");
    scanf("%d", &num_of_subjects);

    for (int i = 1; i <= num_of_students; i++)
    {
        printf("Student %d \n", i);

        total_marks = 0; // Reset total marks for each student

        for (int j = 1; j <= num_of_subjects; j++)
        {
            printf("Enter marks for subject %d :\n", j);
            scanf("%d", &marks);
            total_marks += marks; // Accumulate the marks for each subject
        }

        average_marks = (float)total_marks / num_of_subjects; // Calculate average

        printf("Average marks : %d \n", average_marks);

        // Grade categories
        if (average_marks >= 90)
        {
            printf("Grade : A \n");
        }
        else if (average_marks >= 80 && average_marks < 90)
        {
            printf("Grade : B \n");
        }
        else if (average_marks >= 70 && average_marks < 80)
        {
            printf("Grade : C \n");
        }
        else if (average_marks >= 40 && average_marks < 70)
        {
            printf("Grade : D \n");
        }
        else
        {
            printf("Grade : F \n");
        }
    }

    return 0;
}