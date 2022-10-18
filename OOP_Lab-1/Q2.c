#include <stdio.h>

struct student
{
    char name[50];
    long rol_no;

    int marks[5];
    int to_mks;
    float per;
};

// a. Find total marks and percentage of all n students.
void ma_per(struct student s1[], int m)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        s1[i].to_mks = 0;
        s1[i].per = 0.0f;
        for (j = 0; j < 5; j++)
            s1[i].to_mks += s1[i].marks[j];
        s1[i].per = s1[i].to_mks / 5.0;
    }
    printf("\nTotal Marks and Percentage calculated.\n");
}

// b. Display details of a student with a given roll number.
void dis_det(struct student s1[], long r_n, int m)
{
    int i, j;
    for (i = 0; i < m; i++)
        if (r_n == s1[i].rol_no)
        {
            printf("\nStudent Details:\n");
            printf("Name: %s\nRoll No: %ld\nMarks:\n", s1[i].name, s1[i].rol_no);
            for (j = 0; j < 5; j++)
                printf("%d ", s1[i].marks[j]);
            printf("\nTotal Marks: %d", s1[i].to_mks);
            printf("\nPercentage: %f\n", s1[i].per);
        }
        else
        {
            printf("Given Roll No doesn't exist.\n");
        }
}

// c. Display the details for all the students having percentage in a given range.
void dis_perran(struct student s1[], float p1, float p2, int m)
{
    int i, j;
    for (i = 0; i < m; i++)
        if (s1[i].per >= p1 && s1[i].per <= p2)
        {
            printf("\nStudent Details:\n");
            printf("Name: %s\nRoll No: %ld\nMarks:\n", s1[i].name, s1[i].rol_no);
            for (j = 0; j < 5; i++)
                printf("%d ", s1[i].marks[j]);
            printf("\nTotal Marks: %d", s1[i].to_mks);
            printf("\nPercentage: %f\n", s1[i].per);
        }
}

// d. Sort the array in ascending order of marks.
void sort(struct student s1[], int m)
{
    int i, j, temp;
    for (i = 0; i < m; i++)
        for (j = 0; j < 4; j++)
            if (s1[i].marks[j] > s1[i].marks[j + 1])
            {
                temp = s1[i].marks[j];
                s1[i].marks[j] = s1[i].marks[j + 1];
                s1[i].marks[j + 1] = temp;
            }
    printf("\nSorting is done.\n");
}

int main()
{
    int i, n, ch;
    printf("\nEnter no of students: ");
    scanf("%d", &n);
    struct student s1[n];
    printf("\nEnter Details of Students:\n");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("\n%[^\n]s", &s1[i].name);
        printf("Roll No: ");
        scanf("%ld", &s1[i].rol_no);
        printf("Marks in each subject: ");
        scanf("%d %d %d %d %d", &s1[i].marks[0], &s1[i].marks[1], &s1[i].marks[2], &s1[i].marks[3], &s1[i].marks[4]);
        printf("\n");
    }

    // printf("Menu:\n1: Find total marks and percentage of all n students.\n2: Display details of a student with a given roll number.\n");
    // printf("3: Display the details for all the students having percentage in a given range.\n4: Sort the array in ascending order of marks.\n");

    ma_per(s1, n);

    printf("\nEnter Roll No. of student: ");
    long rn;
    scanf("%ld", &rn);
    dis_det(s1, rn, n);

    float p1, p2;
    printf("\nEnter Percentage Range: (Start) (End) ");
    scanf("%f %f", &p1, &p2);
    dis_perran(s1, p1, p2, n);

    sort(s1, n);

    return 0;
}