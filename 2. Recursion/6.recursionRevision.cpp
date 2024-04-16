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
    cout<<n<<" days left for birthday"<<endl;

    bdayReminder(n-1);
}

int main()
{
    int n;
    cin>>n;
    bdayReminder(n);
}