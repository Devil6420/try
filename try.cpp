#include<iostream>
using namespace std;
int main()
{
    int numerator,denominator,division;
    cout<<"Enter the neuu and deno"<<endl;
    cin>>numerator;
    cin>>denominator;
    try
    {
        if(denominator==0)
        {
            throw("Division is not posssible it can be 'inf'");
        }
        {
            division=numerator/denominator;
            cout<<division<<endl;
        }
    }
    catch(const char * messages)
    {
        cout<<messages;
    }
    
}
    