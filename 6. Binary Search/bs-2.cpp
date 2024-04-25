#include<bits/stdc++.h>
using namespace std;

//lower bound
int lowerBound(vector<int> arr, int n, int x) {
	int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] >= x)
        {
            //might be answer so move left side
            ans = mid;
            high = mid-1;
        }
        else
        {
            //cannot be answer so move right
            low = mid + 1;
        }
    }
    return ans;
}

// upper bound
int upperBound(vector<int> arr, int n, int x) {
	int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] > x)
        {
            //might be answer so move left side
            ans = mid;
            high = mid-1;
        }
        else
        {
            //cannot be answer so move right
            low = mid + 1;
        }
    }
    return ans;
}

int searchInsert(vector<int>& arr, int x)
{
	int n= arr.size();
	int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] >= x)
        {
            //might be answer so move left side
            ans = mid;
            high = mid-1;
        }
        else
        {
            //cannot be answer so move right
            low = mid + 1;
        }
    }
    return ans;
}


//stl for upper bound and lower bound
int lowerBoundstl(vector<int> arr, int n, int x) {

    int lb = lower_bound(arr.begin(),arr.end(), x)-arr.begin();

    return lb;

}
int main()
{
    return 0;
}