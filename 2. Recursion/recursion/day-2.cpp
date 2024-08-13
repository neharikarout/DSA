#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    int ans = fibonacci(n-1) + fibonacci(n-2);

    return ans;
}

void reachHome(int src,int dest){
    //cout<<"source "<<src<<" destination "<<dest<<endl;
    if(src == dest){
        cout<<"reached"<<endl;
        return ;
    }
    src++;
    reachHome(src,dest);
    //cout<<"source "<<src<<" destination "<<dest<<endl;

}

void sayDigits(int n){
  vector<string> arr = {"zero ", "one ", "two ", "three ","four ","five ","six ","seven ","eight ","nine "};
  

  if(n==0) return;

  int digit = n%10;

   n = n/10;
  sayDigits(n);
  cout<<arr[digit];
}

 int climbStairs(int n) {
        if(n<0) return 0;
        
        if(n==0) return 1;

        // R.R
        int ans = climbStairs(n-1) + climbStairs(n-2);
        
        return ans;
    }

int main(){
    // int src = 1;
    // int dest = 10;
    // reachHome(src,dest);

    sayDigits(412);
}