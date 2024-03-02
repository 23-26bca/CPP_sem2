#include<iostream.h>
#include<conio.h>
class time
{
int hrs,mins;
public:
void getdata(int h, int m)
{
hrs=h;
mins=m;
}
void printdata()
{
cout<<hrs<<"hours"<<"  "<<mins<<"mins"<<endl;
}
void sum(time,time);
};
void time::sum(time obj1,time obj2)
{
mins=obj1.mins+obj2.mins;
hrs=mins/60;
mins=mins%60;
hrs=hrs+obj1.hrs+obj2.hrs;
}

void main()
{
time ob1,ob2,ob3;
int h,m;
clrscr();
cout<<"Enter the hours:"<<endl;
cin>>h;
cout<<"Enter the minutes:"<<endl;
cin>>m;
ob1.getdata(h,m);
cout<<"Enter the 2nd hours:"<<endl;
cin>>h;
cout<<"Enter the 2nd minutes:"<<endl;
cin>>m;
ob2.getdata(h,m);
ob3.sum(ob1,ob2);
cout<<"Frist time";
ob1.printdata();
cout<<"Second time";
ob2.printdata();
cout<<"Sum of 2 times:\n";
ob3.printdata();
getch();
}
