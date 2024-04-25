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



int floor(vector<int> &a, int n, int x)
{
    int l = 0;
    int h = n -1;
    int ans = -1;
    int mid =( l + h)/2;

    while(l<=h)
    {
        if(a[mid]<=x)
        {
            //might be ans so store and move right to find largest
            ans = a[mid];
            l = mid+1;
        }
        else
        {
            h = mid - 1;
        }
        mid = (l + h)/2;
    }
    return ans;
}

int ceil(vector<int> &a, int n, int x)
{
    int l = 0;
    int h = n -1;
    int ans = -1;
    int mid = (l + h)/2;
    while(l<=h)
    {
        if(a[mid]>=x)
        {
            //might be ans so store and move left to find smallest
            ans = a[mid];
            h = mid - 1;
        }
        else
        {
            l = mid+1;
        }
        mid = (l + h)/2;
    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int floorAns = floor(a, n, x);
    int ceilAns = ceil(a, n, x);

    return {floorAns, ceilAns};
}



int main()
{
    return 0;
}