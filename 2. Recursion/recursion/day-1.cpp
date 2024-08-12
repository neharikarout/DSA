#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    //base case
    if(n == 0) return 1;

    int chotti = factorial(n-1);
    int badi = n * chotti;

    return badi;
}

int power(int n){
    // base case 
    if(n==0) return 1;

    int smallerProb = power(n-1);
    int biggerProb = 2 * smallerProb;
    return biggerProb;
}

void printCount(int n){
    //base case
    if(n==0) return;
    printCount(n-1);
    cout<<n<<" ";
}

int main(){
    int n ;
    cin>>n;

    //int ans = factorial(n);
    //int res = power(n);
    //cout<<ans<<endl;
    //cout<<res<<endl;
    printCount(10);
}