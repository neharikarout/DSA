#include<iostream>
using namespace std;

void printName(int i,int n)
{
    if(i>n)  //base condition
    return;
    cout<<"Neharika"<<endl;

    printName(i+1,n);
}

void print1ton(int i,int n)
{
    if(i>n)  //base condition
    return;
    cout<<i<<" ";

    print1ton(i+1,n);

}

void printnto1(int n)
{
    if(n<1)  //base condition
    return;
    cout<<n<<" ";

    printnto1(n-1);

}

// using backtracking
void printUpton(int i, int n)
{
    if(i<1)
    return;

    printUpton(i-1,n);
    cout<<i<<" ";

}

//using backtracking
void backCounting(int i, int n)
{
    if(i>n)
    return;

    backCounting(i+1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    // printName(1,n);
    // print1ton(1,n);
    // printnto1(n);
    // printUpton(n,n);
    backCounting(1,n);
    return 0;
}