#include<bits/stdc++.h>
using namespace std;


int search(vector<int> &nums, int target) {
  int low = 0;
  int high = nums.size() - 1;
  int mid = (low + high) / 2;
  while (low <= high)
{
    if(nums[mid] == target) return mid;
    else if(nums[mid] < target)
    {
        low = mid+1;
    } else {
        high = mid - 1;
    }
    mid = (low + high) / 2;
}

return -1;

}

int recursiveSearch(vector<int> &arr , int target ,int low , int high)
{
    int mid = (low + high)/2;
    
    if(low>high) return -1;
    
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) 
    {
        recursiveSearch(arr,target,mid +1 ,high);
    }
    else
    {
        recursiveSearch(arr,target,low,mid-1);
    }

}
int main()
{
    int target;
    vector<int> arr = {3,4,6,7,9,12,16,17};
    cin>>target;
    cout<<"The target is at "<<recursiveSearch(arr,target,0,arr.size()-1);
    return 0;
}