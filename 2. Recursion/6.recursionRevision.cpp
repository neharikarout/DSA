#include<bits/stdc++.h>
using namespace std;

void bdayReminder(int n)
{
    if(n==0)
    {
        cout<<"Happy Birthday"<<endl;
        return;
    }
    if(n==1)
    {
        cout<<n<<" day left for birthday"<<endl;
    }
    else{
    cout<<n<<" days left for birthday"<<endl;
    }
    bdayReminder(n-1);
}


void printNto1(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";

    printNto1(n-1);
}

void printeven(int i,int n)
{
    if(i==n) {
        cout<<n<<" "<<endl;
        return;
    }
    cout<<n<<" ";
    printeven(i+2,n);
}
int main()
{
    int n;
    cin>>n;
    //bdayReminder(n);
    if(n%2 == 1) n--;
    // printNto1(10);
    printeven(2,n);
}