#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr , int n , int k)
{
    int l = 0 , h = n-1;
    int ans = n;
    while(l<=h)
    {
        int mid = l + (h-l)/2;
        if(arr[mid] >= k)
        {
            ans = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> &arr , int n , int k)
{
    int l = 0 , h = n-1;
    int ans = n;
    while(l<=h)
    {
        int mid = l + (h-l)/2;
        if(arr[mid] > k)
        {
            ans = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;    
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int lb = lowerBound(arr,n,k);
    int ub = upperBound(arr,n,k);

    // edge case
    if(lb == n || arr[lb] != k) return {-1,-1};

    return{lb,ub-1};
}


// using binary search
int firstOccurence(vector<int> &arr , int n , int k)
{
    int l = 0 , h = n-1;
    int first = -1;

    while(l <= h)
    {
        int mid = (l + h)/2;
        if(arr[mid] == k)
        {
            first = mid;
            h = mid -1;
        }
        else if(arr[mid] < k)
        {
            l = mid +1;
        }
        else {
            h = mid -1;
        }
    }
    return first;
}
int lastOccurence(vector<int> &arr , int n , int k)
{
    int l = 0 , h = n-1;
    int last = -1;

    while(l <= h)
    {
        int mid = (l + h)/2;
        if(arr[mid] == k)
        {
            last = mid;
            l = mid + 1;
        }
        else if(arr[mid] < k)
        {
            l = mid +1;
        }
        else {
            h = mid -1;
        }
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int first = firstOccurence(arr, n, k);
    if(first == -1) return {-1,-1};

    int last = lastOccurence(arr, n, k);

    return {first , last};
}


// search in a  rotated sorted array (unique elements)

int search(vector<int>& arr, int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == k) return mid;

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1;
}


// Find minimum in rotated sorted array
int findMin(vector<int>& arr)
{
	int n = arr.size();
	int ans = INT_MAX;
	int low = 0;
	int high = n-1;

	while(low<=high)
	{
		int mid =(low+high)/2;

         //if search space is already sorted
        if(arr[low] <= arr[high])
        {
            if(arr[low] < ans)
            {
                ans = arr[low];
            }
            break;
        }

		if(arr[mid]>=arr[low]) //sorted part
		{
			ans = min(arr[low],ans);
			low = mid + 1;
                } else { // unsorted
                        ans = min(ans, arr[mid]);
                        high = mid - 1;
                }
        }

        return ans;
}

// search in sorted array II (have duplicates)
bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
       int n = arr.size();
       int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == k) return true;

        // if low = mid = high
        if(arr[mid] == arr[low] && arr[mid] == arr[high])
        {
            low++;
            high--;
            continue;
        }

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return false;
}


// find how many times array is rotated

int findKRotation(vector<int> &arr){
    int low = 0;
    int high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1 ;

    while(low<=high)
    {
        int mid = (low + high)/2;
        //if search space is already sorted
        if(arr[low] <= arr[high])
        {
            if(arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }
        if(arr[low] <= arr[mid]) // sorted part i.e left  eg: 4560123  
        {
            // may or may not be answer
            if(arr[low] < ans)
            {
                index = low; // manual function so that we can store ans
                ans = arr[low];
            }
            low = mid + 1;
        }

        else{ // right part i.e unsorted part
                high = mid-1 ;
            if(arr[mid] < ans)
            {
                index = mid;
                ans = arr[mid];
            }
        }
    }
      return index;
}



// single element in a sorted array
int singleNonDuplicate(vector<int>& arr)
{
	int n = arr.size();

	if(n == 1) return arr[0];

	if(arr[0] != arr[1])  return arr[0];

	if(arr[n-1] != arr[n-2]) return arr[n-1];

	// rest
	int low = 1 , high = n-2;
	
	while(low<=high)
	{
		int mid = (low + high)/2;
		
		if(arr[mid] != arr[mid + 1]  && arr[mid] != arr[mid-1]) 
		return arr[mid];  // actual return statement

		//elimination
		// (odd , even) i.e left half and ans is on right
		if((mid % 2 == 1 && arr[mid-1] == arr[mid] ) 
		||  (mid%2 == 0 && arr[mid + 1] == arr[mid] ))
		{
			low = mid + 1;
		}

		else // (even,odd) i.e right half and ans is on left
		{
			high = mid -1;
		}
	}

	return -1;  // dummy statement as function has int type
}
int main()
{
    return 0;
}