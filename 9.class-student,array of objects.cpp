#include<iostream.h>
#include<conio.h>
class student{
    int rollno,age,total;
    char name[20];
    int marks[3];

    public:
        void getdetails();
        void putdetails();
};

void student::getdetails()
{
    int sum=0;
    cout<<"enter the Rollno:"<<endl;
    cin>>rollno;
    cout<<"Enter the Name"<<endl;
    cin>>name;
    cout<<"Enter the Age:"<<endl;
    cin>>age;
    cout<<"Enter the Marks of 3 subjects:"<<endl;
    for(i=0;i<3;i++)
    {
        cin>>marks[i];
        total=sum=marks[i];
    }
}

void student::putdetails()
{
    cout<<"ROLLNO: "<<rollno<<endl;
    cout<<"NAME: "<<name<<endl;
    cout<<"AGE: "<<age<<endl;
    for(i=0;i<3;i++)
    {
    cout<<"MARK: "<<marks[i]<<endl;
    }
    cout<<"TOTAL: "<<total<<endl;
}

void main()
{
    student obj[20];//array object
    int n,i;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    for (i=0;i<n;i++)
    {
        obj[i].getdetails();
    }
    
    for (i=0;i<n;i++)
    {
        obj[i].putdetails();
    }
    getch();
}