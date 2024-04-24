#include<iostream.h>
#include<conio.h>
class class2;//declared to avoid confusion causing error later on
class class1
{
    int a;
    public:
	void getdata(int m)
        {
            a=m;
        }

        friend void swap(class1&,class2 &);

        void printvalue()
        {
            cout<<"a= "<<a<<endl;
        }
};

class class2
{
    int b;
    public:
	void getdata(int n)
	{
            b=n;
        }

        friend void swap(class1&,class2 &);

        void printvalue()
        {
            cout<<"b= "<<b<<endl;
        }
};

void swap(class1 &obj1,class2 &obj2)
{
    int t;
    t=obj1.a;
    obj1.a=obj2.b;
    obj2.b=t;
}

void main()
{
    int m;
    class1 obj1;
    class2 obj2;
    cout<<"Enter 1st Value: "<<endl;
    cin>>m;
    obj1.getdata(m);
    cout<<"Enter 2nd Value: "<<endl;
    cin>>m;
    obj2.getdata(m);
    cout<<"Before Swapping:"<<endl;
    cout<<"1st value :"<<endl;
    obj1.printvalue();
    cout<<"2nd value :"<<endl;
    obj2.printvalue();

    swap(obj1,obj2);
    cout<<"After Swapping:"<<endl;
    cout<<"1st value :"<< endl;
    obj1.printvalue();
    cout<<"2nd value :"<<  endl;
    obj2.printvalue();
    getch();
}
