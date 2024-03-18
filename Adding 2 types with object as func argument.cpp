#include<iostram.h>
#include<conio.h>

class time{
    int hrs,min;
    public:
        void gettime(int h,int m)
        {
            hrs=h;
            min=m;
        }

        void puttime()
        {
            cout<<hrs<<"Hours"<<min<<"minutes"
        }
}
void main()
{
    int m,h;
    cout<<"Enter hour";
    cin>>h;
    cout<<"Enter Minute";
    cin>>m;
    time obj1;
    obj1.gettime(h,m);
    obj1.puttime;
    getch();
}