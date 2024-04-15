#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int secondLargest(vector<int> &a,int n)
{
    int largest = a[0];
    int slargest = -1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &a,int n)
{
     int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i]<ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;    
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest = secondLargest(a,n);
    int ssmallest = secondSmallest(a,n);
    return {slargest,ssmallest};
}


int isSorted(int n, vector<int> a) {
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1]) { }
        else{
            return false;
        }
    }
    return true;
}

int removeDuplicates(vector<int> &arr, int n) {
	// Remove duplicates from sorted array
	int i = 0;
	for(int j=1;j<n;j++)
	{
		if(arr[j]!=arr[i]) {
			arr[i+1] = arr[j];
			i++;
		}
	}
	return i+1;
}

int main()
{
    int element;
    vector<int> arr;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        arr.push_back(element);
    }

    int result  = largestElement(arr,n);
    cout<<"largest element: "<<result;

}