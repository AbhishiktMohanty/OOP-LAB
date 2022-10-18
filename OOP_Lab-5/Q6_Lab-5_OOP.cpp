/*6. WAP which displays a given character, n number of times, using a function. When the n value is not
   provided, it should print the given character 80 times. When both the character and n value is not
   provided, it should print '*' character 80 times.
           [Write the above program in two ways:
                   -using function overloading.
                   -using default arguments.]*/
// done a

#include <iostream>
using namespace std;

class Character
{
public:
    void printCh(char ch, int n)
    {
        for (int i = 0; i < n; i++)
            cout << ch << " ";

        cout << endl;
    }

    void printCh(char ch)
    {
        for (int i = 0; i < 80; i++)
            cout << ch << " ";

        cout << endl;
    }

    void printCh()
    {
        for (int i = 0; i < 80; i++)
            cout << "* ";

        cout << endl;
    }
};

int main()
{
    Character c1, c2;
    cout << "\n\nMethod-1:" << endl;
    c1.printCh('Z', 6);
    c1.printCh('A');
    c1.printCh();

    cout << "\n\nMethod-2:" << endl;

    void printCh(char ch = '*', int n = 80);
    c2.printCh('Z', 6);
    c2.printCh('A');
    c2.printCh();

    return 0;
}