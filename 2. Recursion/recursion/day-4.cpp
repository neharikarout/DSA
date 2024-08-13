#include<bits/stdc++.h>
using namespace std;

void reverse(string &s,int i,int j){
    //base case
    if(i>j) return ;

    swap(s[i],s[j]);

    reverse(s,i+1,j-1);
}

bool checkPalindrome(string str, int i , int j){
    //base case 
    if(i > j) return true;

    if(str[i] != str[j]) return false;

    else {
        return checkPalindrome(str,i+1,j-1);
    }
}

int power(int a, int b){
    int ans ;
    //base case 
    if(b==0) return 1;
    if(b==1) return a;

    if(b%2 == 0) {
        ans = power(a,b/2) * power(a,b/2);
    }
    else{
        ans = a * power(a,b/2) * power(a,b/2);
    }
    return ans;

}


void sortedArray(int *arr,int n){
    //base case
    if(n==0 || n==1) return;

    // first case solve
    for(int i = 0 ; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortedArray(arr,n-1);
}

int main(){
    string s ;
    //cin>>s;

   //reverse(s,0,s.length()-1);
   //int ans = checkPalindrome(s,0,s.length()-1);
   //cout<<ans;

//    int a,b;
//    cin>>a>>b;
//    int ans = power(a,b);
//    cout<<"Answer is:"<<ans<<endl;

int arr[5] = {12,3,45,6,78};

sortedArray(arr,5);

for(int i=0 ; i<5; i++){
    cout<<arr[i]<<" ";
}
}