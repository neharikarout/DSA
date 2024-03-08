#include<iostream>

using namespace std;

//infinite recursion
// void f()
// {
//     cout<<1;
//     f();
// }


int count = 0;
void f()
{
    if(count == 4) // base condition
    return;
    cout<<count;
    count++;
    f();
}
int main()
{
    f();
}