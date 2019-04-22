#include<iostream>

using namespace std;

class how_old{
    int c,d,e;
public:


    int day,month,year;

int calculation(how_old x,how_old y)
    {
        if(x.day>y.day)
        {
            c=x.day-y.day;
        }
        else
        {
            c=(x.day+30)-y.day;
            x.month=x.month-1;
        }

        if(x.month>y.month)
        {
            d=x.month-y.month;
        }

        else{
            d=(x.month+12)-y.month;
            x.year=x.year-1;
        }

        e=x.year-y.year;


    }

  int  display()
    {
        cout<<"I am"<<c<<"year"<<d<<"month"<<e<<"day"<<endl;
    }


};

int main()
{
    how_old birth_day,today;
    cout<<"input Birthday:"<<endl<<"............"<<endl;
    cin>>birth_day.day>>birth_day.month>>birth_day.year;
    cout<<"input Today:"<<endl<<"............"<<endl;
    cin>>today.day>>today.month>>today.year;
     calculation(today,birth_day);
     display();

     return 0;




}
