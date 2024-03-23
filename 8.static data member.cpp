#include<iostream.h>
#include<conio.h>
class item{
    static int count;
    int number;

    public:
        void getdata(int n)
        {
            number=n;
            count ++;
        }

        void getcount(void)
        {
            cout<<"Count: "<<count<<endl;
        }
};

int item::count;
    
void main()
{
item a,b,c;//objects
a.getcount();
b.getcount();
c.getcount();
a.getdata(100);
b.getdata(200);
c.getdata(300);
cout<<"After reading the data:"<<endl;
a.getcount();
b.getcount();
c.getcount();
getch();
}