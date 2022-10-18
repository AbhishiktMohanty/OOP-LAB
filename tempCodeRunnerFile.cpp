// #include <stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };
// struct node *head;
// void create(int n){
//     struct node *ptr=(struct node *)malloc(sizeof(struct node));
//     if(ptr != 0){
//         ptr->data=n;
//         ptr->next=head;
//         head=ptr;
//     }
// }
// void delete(){
//     struct node *end=head;
//     struct node *prev=NULL;
//     while(end->next){
//         prev=end;
//         end=end->next;
//     }prev->next=NULL;
// }
// void Elements(){
//     struct node *temp=head;
//     printf("The Elements are - \n");
//     while(temp != NULL){
//         printf("%d --> ",temp->data);
//         temp=temp->next;
//     }printf("\n");
// }


// int main()
// {
//     int ch,n=1,number;
    
//     while(n==1){
//         printf("Enter your choice \n 1) Create \n2) delete \n3) exit \n4)Elements\n");
//     scanf("%d",&ch);
//         switch(ch){
//             case 1:
//             printf("Enter the Number to enter ");
//             scanf("%d",&number);
//             create(number);break;
//             case 2: delete();break;
//             case 3:exit(0);break;
//             case 4:Elements();break;
//         }
//         printf("Enter 1 to continue , 0 to exit ");
//         scanf("%d",&n);
//         if(n==0){
//             exit(0);
//         }
//     }   

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class geeks {
// 	const char* p;

// public:
// 	// default constructor
// 	geeks()
// 	{

// 		// allocating memory at run time
// 		p = new char[6];
// 		p = "geeks";
// 	}

// 	void display()
// 	{
// 		cout << p << endl;
// 	}
// };

// int main()
// {
// 	geeks obj;
// 	obj.display();
// }


