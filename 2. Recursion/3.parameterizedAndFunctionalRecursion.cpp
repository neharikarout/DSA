#include<iostream>
using namespace std;


// parameterized way
void sumUptoN(int i, int sum)
{
    if(i<1) {
        cout<<sum;
        return;
    }
    sumUptoN(i-1,sum+i);
}

//functional
 int sumFunction(int n)
 {
    if(n==0) return 0;

    return n + sumFunction(n-1);
 }

void factorialUptoN(int i, int fact)
{
    if(i==0) {
        cout<<fact;
        return;
    }
    factorialUptoN(i-1,fact*i);
}

  int factorial(int n)
 {
    if(n==0) return 1;

    return n * factorial(n-1);
 }

int main()
{
   //sumUptoN(10,0);
//cout<<sumFunction(10);
// cout<<factorial(4);
factorialUptoN(4,1);


}