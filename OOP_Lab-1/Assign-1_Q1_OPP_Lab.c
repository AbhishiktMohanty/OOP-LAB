//Q1 All ok

#include<stdio.h>

struct student{
    char name[20];
    int roll;
    int marks[5];
    };

int main( ){
    struct student s1;
    printf ( "Name of the student: ");
    scanf("%[^\n]s", s1.name);
    printf ("Roll Number: ");
    scanf("%d",&s1.roll);
    
    int i;
    for(i = 0 ; i < 5; i++){
        printf("Enter the marks in subject %d: ",i+1);
        scanf("%d",&s1.marks[i]);
        }

        printf("\n");
        printf("---------Displaying Details---------\n") ;
        printf("\n");
        printf( "Name of the student: %s\n", s1.name) ;
        printf("Roll number: %d\n", s1.roll) ;
        printf("Marks in 5 subjects are: \n") ;
        for(i = 0; i<5 ; i++){
            printf("%d ", s1.marks[i]) ;
            }
            printf("\n");
            
    return 0;
}