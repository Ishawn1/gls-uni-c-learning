#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if(age>=60){
        printf("You're eligible for senior citizen discount.");
    }
    else if(age>=12){
        printf("You're eligible for student discount.");
    }
    else
    printf("You're not eligible for any discount.");
    return 0;
}