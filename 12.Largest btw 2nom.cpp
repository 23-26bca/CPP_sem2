#include <iostream.h>
#include <conio.h>

class classb;//Forward declaration 
class classa
{
    int n;

    public :
        void getvalue (int a)
        {
            n=a;
        }
        freind void max(class a, class b);
};

class classb
{
    int n;
    public:
        void get value (int b)
        {
             n=b;
        }
        friend void max (class a, class b);
} 

void max(classa obj1,classb obj2)
{
    if (obj1.n > obj2.n)
    cout<<" largest is" <<obj1.n ;
    cout << "largest is" << obj2.n ;
}

void main( )
{
    int p ;
    classa obj1;
    classb obj2;

    cout<<"Enter the first number:"<<endl;
    cin >>p;
    obj1.getvalue(p);
    cout<<"enter the second number: "<<endl;
    cin>>p;
    obj2.getvalue(p);
    max(obj1,obj2);
    getch( );
}