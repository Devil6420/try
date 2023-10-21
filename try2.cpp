#include<iostream>
using namespace  std;
int main ()
{
    int age ;
    cout<<"enter you age "<<endl;
    cin>>age;
    try
    {
        if(age<16)
        {
            throw("You do not sa tisfy the age limit");
        }
        else if (16<=age && age<=18)
        {
            throw(age);
        }
            cout<<"You can proceed"<<endl;
    }
    catch(const char * messages)
    {
        cout<<messages;
    }
    catch(int messages)
    {
        cout<<messages;
    }
    

}