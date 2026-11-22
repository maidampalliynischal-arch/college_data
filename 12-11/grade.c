#include <stdio.h>
int calculateTotal(int mark1, int mark2, int mark3){
    return mark1 + mark2 + mark3;
}
float calculatePercentage(int total){
    return total / 3.0f;
}
char findGrade(float percentage){
    if (percentage >= 90.0){
        return 'A';
    }
    else if (percentage >= 75.0f){
        return 'B';
    }
    else if (percentage >= 50.0f){
        return 'C';
    }
    else if (percentage >= 40.0f){
        return 'D';
    }
    else if (percentage < 40.0f){
        return 'F';
    }
}
int main(void){
    int marks1, marks2, marks3;
    printf("Enter the marks in subject1, subject2, subject3: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    if(marks1 < 0 || marks1 > 100 ||
        marks2 < 0 || marks2 > 100 ||
        marks3 < 0 || marks3 > 100){
            printf("invalid input");
            return 1;
        }
    
    int total = calculateTotal( marks1, marks2, marks3);
    float percentage = calculatePercentage(total);
    char grade = findGrade(percentage);


    printf("total marks: %d\n", total);
    printf("percentage: %.2f\n", percentage);
    printf("grade: %c\n", grade);
}
