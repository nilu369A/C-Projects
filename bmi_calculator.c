// a program that calculates the Body Mass Index (BMI) of a person based on their height and weight inputs

#include<stdio.h>

int main(){
    float weight, height, bmi;

    printf("Enter your weight (in kilograms): \n");
    scanf("%f", &weight);

    printf("Enter your height (in meters): \n");
    scanf("%f", &height);
    
    // BMI calculation
    bmi = weight / (height * height);
    
    // print result
    printf("BMI result : \n");
    printf("Your BMI is : %.2f \n", bmi);
    
    // BMI categories
    if(bmi < 18.5){
        printf("You are underweight.");
    }else if(bmi >= 18.5 && bmi <= 24.9){
        printf("You have normal weight. ");
    }else if(bmi >= 25 && bmi >= 29.9){
        printf("YOu are overweight. ");
    }else {
        printf("You are obese.");
    }

    return 0;
}
