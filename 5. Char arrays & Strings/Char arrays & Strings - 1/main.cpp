#include<iostream>
#include<strings.h>
using namespace std;

int getlength(char name[])
{
    int length=0;
    int i=0;
    while(name[i] =='\0')
    {
        length++;
        i++;

    }
}

int main()
{
//     char ch[50];
//     cin>>ch[3];
//     cin>>ch[49];
//     cin>>ch;
//     cin.getline(ch,50);
    char arr[100];
    cin>>arr;
//    cin.getline(arr,50);
    cout<<"Name : "<<arr<<endl;
    int ans=getlength(arr);
    cout<<ans;
// 
}