#include<bits/stdc++.h>

using namespace std;

class myclass{

public:
    int a;
    char name[100];
    void set_a(int a);
    int get_a();
    void set_name(char* name);
};

void myclass::set_a(int num)
{
    a = num;
}

int myclass::get_a()
{
    return a;
}

void myclass::set_name(char name[])
{
    name = name;
}

char myclass::get_name()
{
    return name;
}

int main()
{
    myclass obj;
    obj.set_a(10);
    cout<<obj.get_a()<<endl;

    obj.set_name("animesh");

    return 0;
}
