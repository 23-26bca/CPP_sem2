#include<iostram.h>
#include<conio.h>

class average
{
    int a,b;
    public:
        void getvalue(int x,int y)
        {
            a=x;
            b=y;
        }

        friend void avg(average);
} 

void avg(average obj)
{
    float a;
    a=(obj.a+obj.b)/2.0;
    cout<<"Average: "<<a;
}

void main()
{
    int x,y;
    cout<<"Enter 2 number: "<<endl;
    cin>>x>>y;
    average obj;
    obj.getvalue(x,y);
    avg(obj);
    getch();
}