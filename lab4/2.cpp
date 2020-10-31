#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,4> numbers;

    for (int i=0;i<4;i++){
        numbers[i]=i;
    }

    //cout<<&numbers[0]<<endl;
    //cout<<&numbers[1]<<endl;
    //cout<<&numbers[2]<<endl;
    //cout<<&numbers[3]<<endl;
    //cout<<&numbers[4]<<endl;

    int *ptr_numbers=&numbers[0];
    ptr_numbers+=3;
    cout<<*ptr_numbers<<endl;

    return 0;
}
