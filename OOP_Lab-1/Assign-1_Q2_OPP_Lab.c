//Q2 Not having Part b
#include <stdio.h>
#include <string.h>
struct data
{
    char n[50];
    int roll;
    int m[5];
};

int n;

double Sum(struct data a)
{
    double s=0.0;
    
    for(int i=0; i<5; i++)
    {
        s+=a.m[i];
    }
    return s;
}

void Sort(double a[], int n)
{
    int i, j, t; double m;

    
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                t=j;
            }
            
            m=a[t];
            a[t]=a[i];
            a[i]=m;
        }
    
}

void out(struct data a, double t, double p)
{
    printf("\nName: %s\nRoll no.: %d\n",a.n, a.roll);
    printf("Subject marks:-\n");
    for(int i=0;i<5;i++)
    {
        printf("Subject %d: %d\n",i+1, a.m[i]);
    }
    
    printf("\nTotal Marks : %.2f \n", t);
    printf("Percentage : %.2f \n", p);
}

int main()
{
    
    printf("Enter Number of students: ");
    scanf("%d", &n);
    
    struct data d[n];
    printf("\nEnter Details as follows (marks out of 100):- \n");

    for(int i=0; i<n; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Name: ");
        scanf("%s", d[i].n);
    
        printf("Roll number: ");
        scanf("%d", &d[i].roll);
        
        printf("Enter marks for 5 subjects-\n");
        for(int j=0; j<5; j++)
        {
            printf("Subject %d: ",j+1);
            scanf("%d", &d[i].m[j]);
        }
    }
    
    double total[n], percentage[n];
    
    for(int i=0; i<n; i++)
    {
        total[i]=Sum(d[i]);
        percentage[i]=(total[i]/500.0)*100;
    }
    printf("\nDetails are as follows:\n");
    for(int i=0; i<n; i++)
    {
        printf("\nDetails of student:-%d :\n", i+1);
        out(d[i], total[i], percentage[i]);
    }

    
    
    Sort(percentage, n);
    
    printf("\n\nSorted Percentages Are: ");
    for(int i=0; i<n; i++)
    {
        printf("%.2f  ", percentage[i]);
    }
    
    return 0;
}