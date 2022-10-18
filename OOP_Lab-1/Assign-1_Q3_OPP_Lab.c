//Q3 All Ok

#include <stdio.h>
struct employee
{  
    char name[30];
    int id;
    int age;
    int salary;
};
int main()
{
    int n ,netSalary;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    struct employee p[n];
    for (int i=0; i<n; i++)
    {
        printf("\n");

        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%s",p[i].name);

        printf("Id: ");
        scanf("%d",&p[i].id);

        printf("Age: ");
        scanf("%d",&p[i].age);

        printf("Basic Salary: ");
        scanf("%d",&p[i].salary);
        p[i].salary = p[i].salary + (80*p[i].salary)/100 + (10*p[i].salary)/100;
    }
    printf("\n");
    printf("-------------- All Employees Details ---------------\n\n");
    for(int i=0; i<n; i++){
        printf("Name \t\t: %s \n",p[i].name); 
        printf("Id \t\t: %d \n",p[i].id);
        printf("Age\t\t: %d \n",p[i].age);
        printf("Gross Salary \t: %d \n",p[i].salary);
        printf("\n");
    }
    
    return 0;
}