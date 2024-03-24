#include<iostream.h>
#include<conio.h>
void main()
{
        int &max(int &, int &)
        int a,b,n1,n2;
        clrscr();
        cout<<"Enter two numbers";
        cin>>a>>b;
        n1=a;
        n2=b;
        max(a,b)=-1;
        if(a==1)
            cout<<n1<<"is the largest!";
        else
            cout<<n2<<"is the largest";
        getch();
}

int &max(int &x,int &y)
{    if(x>y)
        return x
    else 
        return y
}

