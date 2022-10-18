/* Q7.1). WAP using cpp that uses dynamic constructor to allocate memory to an array of integer.
Count the number of odd and even element present in the array.*/

#include <iostream>
using namespace std;
class Dynamic
{
    int c = 0, c1 = 0;
    int n;
    int *a;

public:
    Dynamic(int v)
    {
        n = v;
        a = new int[n];
        int i = 0;
    }
    void input()
    {
        cout << "Enter the element of the array:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void calc()
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                c = c + 1;
            }
            else
            {
                c1 = c1 + 1;
            }
        }
    }
    void display()
    {
        cout << "The Given Array is:\n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
            // cout;
        }
        cout << endl
             << "Number of odd element in the array is:  " << c1 << endl;
        cout << "Number of even element in the array is:  " << c << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    Dynamic ob(n);
    ob.input();
    ob.calc();
    ob.display();
    return 0;
}