#include<stdio.h>
int main(){
    float weight, height, bmi;

    printf("Enter your weight (in kilograms): \n");
    scanf("%f", &weight);

    printf("Enter your height (in meters): \n");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI result : \n");
    printf("Your BMI is : %.2f \n", bmi);

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