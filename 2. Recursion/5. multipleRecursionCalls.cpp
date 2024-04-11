#include <iostream>

using  namespace std;

int fibbonaci(int n)
{
    if(n<=1) return n;
    int last = fibbonaci(n-1);
    int slast = fibbonaci(n-2);
    return last + slast;
}

int main()
{
    int n = 4;
    int ans  = fibbonaci(n);
    return 0;
}