#include<iostream>
using namespace std;
class BookDetails
{
    public:
    char bookname[20];
    char author[20];
    float price;

    public:
    void getData();
    void showData();
};

void BookDetails::getData()
{
    cout<<"Enter Book Name : ";
    cin>>bookname;
    cout<<"Enter author name: ";
    cin>>author;
    cout<<"Enter the price of the book: ";
    cin>>price;
}

void BookDetails::showData()
{
    cout<<"\n---Book Details---\n";
    cout<<"\nBook Name   : "<<bookname;
    cout<<"\nAuthor Name : "<<author;
    cout<<"\nBook Price  : "<<price;

}

int main()
{
    BookDetails c1;
    c1.getData();
    c1.showData();
    return 0;
}