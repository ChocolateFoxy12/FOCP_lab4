#include <iostream>

using namespace std;


int main()
{
    int variable=8;

    int* ptr; //empty ---> null pionter

    cout<<ptr<<endl;

    cout<<"memory address of variable"<<&variable<<endl;
    cout<<"memory address of ptr"<<&ptr<<endl;

    ptr=&variable;

    cout<<*ptr<<endl;

    *ptr=25;

    cout<<variable<<endl;


    return 0;
}
