#include<bits/stdc++.h>
using namespace std;



int findPeakElement(vector<int> &arr) {
    int n = arr.size();
    int low = 1 , high = n - 2;
    int ans = INT_MIN;

    if(n==1) return 0; // single element

    if(arr[0] > arr[1] ) return 0;

    if(arr[n-1] > arr[n-2]) return n-1;

    while(low<=high)
    {
        int mid = (low + high) / 2;

        if((arr[mid] > arr[mid - 1])  &&  (arr[mid] > arr[mid + 1]) )
        {
            return mid;
        }

        //left part or increasing curve i.e ans on right  
        if(arr[mid] > arr[mid -1])
        {
            low = mid + 1 ; 
        }
        else { 

        high = mid -1;
        }
    }
    return -1;
}



int main()
{
    return 0;
}