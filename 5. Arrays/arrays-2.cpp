#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void leftRotateByOne(vector<int> &a)
{
    int n = a.size();
    int temp = a[0];
    for(int i = 1;i<n;i++)
    {
        a[i-1] = a[i]; 
    }

    a[n-1] = temp;
}

//brute force
void leftRotatebyD(vector<int> &a, int n,int d)
{
    d = d%n;
    vector<int> temp;
    for(int i=0;i<d;i++)
    {
        temp.push_back(a[i]);
    }

    //shifting by d places
    for(int i=d;i<n;i++)
    {
        a[i-d] = a[i];
    }

    // putting back temp in a
    for(int i = n-d ;i<n;i++)
    {
        a[i] = temp[i-(n-d)];   // 5= n-d - n-d = temp[0]
    }
    
}


void leftRotateBydOptimal(vector<int> &a,int n , int d)
{
    reverse(a.begin(), a.begin()+d);
    reverse(a.begin()+d, a.end());
    reverse(a.begin(), a.end());

}
int main()
{
    vector<int> a;
    int n,element;
    cout<<"Enter array size: "<<endl;
    cin>>n;

    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        a.push_back(element);
    }

    // leftRotateByOne(a);
    // leftRotatebyD(a,n,4);
    leftRotateBydOptimal(a,n,4);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}