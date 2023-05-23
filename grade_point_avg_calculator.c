// a program that calculates the Grade Point Average (GPA) of a student based on their course grades and credit hours

#include <stdio.h>
#include <ctype.h>

int main()
{
        int numofcourse, credithour;
        char grade;
        float weightedsum = 0.0, grade_value, gpa, total_credit_hour = 0.0;

        printf("Enter the number of courses : \n");
        scanf("%d", &numofcourse);
        getchar(); // Consume the newline character from the previous input

        for (int i = 1; i <= numofcourse; i++)
        {
                printf("Course %d : \n", i);

                printf("Enter letter grade : \n");
                scanf("%c", &grade);
                getchar();

                printf("Enter credit hour : \n");
                scanf("%d", &credithour);
                getchar();

                grade = toupper(grade); // Convert the grade character to uppercase

                // Assign grade points based on the entered grade
                if (grade == 'A')
                {
                        grade_value = 4;
                }
                else if (grade == 'B')
                {
                        grade_value = 3;
                }
                else if (grade == 'C')
                {
                        grade_value = 2;
                }
                else if (grade == 'D')
                {
                        grade_value = 1;
                }
                else
                {
                        grade_value = 0;
                }

                total_credit_hour += credithour;
                weightedsum += grade_value * credithour;
        }
        gpa = weightedsum / total_credit_hour;

        printf("GPA result : \n");
        printf("Your GPA is : %.2f\n", gpa);

        return 0;
}