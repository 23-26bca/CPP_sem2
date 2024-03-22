#include<iostream.h>
#include<conio.h>
void main()
{
int a,b;
void swap(int &,int &);
clrscr();
cout<<"Enter two numbers";
cin>>a>>b;
cout<<"Numbers before swapping are: "<<a<<"& "<<b;
swap(a,b); 
getch();
}

void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Numbers after swapping are: "<<x<<"& "<<y;
}
