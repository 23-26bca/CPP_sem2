// Write a program to create a class student, consisting of data members:rollno,name and age,that comes under private visibility label.
// Create two member functions:getdata() and putdata() to accept and print details of student.
// The program should create two objects to get and display details of two students where one object is created along witrh class declaration and other created outside the class 

#include<iostream.h>
#include<conio.h>

class student{//class decleration
    int rollno,age;
    char name[20];
    
    public:
        void getdata(int r,char n[20],int a)
        {
            rollno=r;
            name=n;
            age=a;
        }

        void putdata(void)
        {
            cout<<"Rollno: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
}obj1;//object 1 is decalered

void main()
{
    int r,a;
    char n[20];
    clrscr();
    student obj2; //object 2 declared
    cout<<"Enter the rollno of 1st student:"<<endl;
    cin>>r;
    cout<<"Enter the name of 1st student:"<<endl;
    cin>>n;
    cout<<"Enter the age of 1st student:"<<endl;
    cin>>a;
    obj1.getdata(r,n,a);
    obj1,putdata();

    cout<<"Enter the rollno of 2nd student:"<<endl;
    cin>>r;
    cout<<"Enter the name of 2nd student:"<<endl;
    cin>>n;
    cout<<"Enter the age of 2nd student:"<<endl;
    cin>>a;
    obj2.getdata(r,n,a);
    obj2,putdata();
    getch();
}