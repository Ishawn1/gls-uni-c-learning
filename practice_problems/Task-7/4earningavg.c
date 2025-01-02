#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    int age;
    int salary;
};
int main (void){
    struct Employee employee[3];
    float avg;
    for(int i=0;i<3;i++){
        printf("Detail of person %d \n", i+1);
        printf("What is your Name: ");
        scanf("%s",employee[i].name);
        printf("What is your age: ");
        scanf("%d",&employee[i].age);
        printf("What is your id: ");
        scanf("%d",&employee[i].id);
        printf("What is your Salary: ");
        scanf("%d",&employee[i].salary);
    }
    avg=(employee[0].salary + employee[1].salary + employee[2].salary)/3;
    for(int i=0;i<3;i++){
        if(employee[i].salary>avg){
        printf("Name:  %s \n age: %d \n id: %d \n salary %d \n ",employee[i].name,employee[i].age,employee[i].id,employee[i].salary);

        }
    }
}
