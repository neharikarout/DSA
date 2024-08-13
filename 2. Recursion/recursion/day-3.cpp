#include<bits/stdc++.h>
using namespace std;

bool isSorted(int* arr, int size){
    bool ans;
    //base case 
    if(size == 0 || size == 1) return true;

    if(arr[0]>arr[1]) return false;

    else ans = isSorted(arr+1,size-1);

    return ans;

}

int sumArray(int *arr,int size){
    //base case
    if(size==0) return 0;

    if(size == 1) return arr[0];
    
    int remainingPart = sumArray(arr+1, size-1);
    int sum = arr[0] + remainingPart;

    return sum;

}

bool linearSearch(int arr[], int size, int k){
    // base case
    if(size == 0) return false;

    if(arr[0] == k) return true;
    else{
        bool rp = linearSearch(arr+1, size-1 , k);
        return rp;
    }

    return false;
}

int binarySearch(vector<int> arr, int s , int e , int k){
    // base case 
    if(s>e) return -1;
    bool ans;

    int mid = s + (e-s)/2;

    if(arr[mid] == k) return mid;
    else if(arr[mid] < k) {
        return binarySearch(arr,mid+1,e,k);
    }
    else {
        return binarySearch(arr,s,mid-1,k);
    }
}


int main(){
    int arr[5] = {1,2,9,4,5};

    //bool ans = isSorted(arr,5);
    //int ans = sumArray(arr,5);

    // bool ans = linearSearch(arr,5,7);
   // bool ans = binarySearch(arr,0,4,9);

   // cout<<ans<<endl;

}