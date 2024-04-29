#include<bits/stdc++.h>
using namespace std;

long long findSum(vector<int> &arr , int divisor)
{
	int sum =0;
	for(int i=0 ; i<arr.size() ; i++)
	{
		sum += ceil((double)arr[i]/(double)divisor);
	}
	return sum;
}

int findMax(vector<int> &arr)
{
	int maxi = INT_MIN;
	for(int i = 0 ; i<arr.size() ; i++)
	{
		maxi = max(arr[i],maxi);
	}
	return maxi;
}



int smallestDivisor(vector<int>& arr, int limit)
{
	int low = 1 ; int high = findMax(arr);
	long long sum = 0; int ans = INT_MAX;

	while(low<=high)
	{
		int mid=(low+high)/2;

		sum = findSum(arr,mid);
		if(sum <= limit)
		{
			ans = mid;
			high = mid-1;
                }
		 else 
		 {
                        low = mid + 1;
         }
     }
        return ans;
}

//capacity to ship packages within D days
#include<bits/stdc++.h>

int findDays(vector<int> &weights , int cap)
{
    int days = 1 , load = 0;
    for(int i = 0 ; i<weights.size() ; i++)
    {
        if(weights[i] + load > cap)
        {
             days++; // go to next day
             load = weights[i]; // put weight
        }
        else{
            load +=weights[i] ; // put on same day
        }
    }
    return days;
}


int leastWeightCapacity(vector<int> &weights, int d)
{
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);
    int ans = INT_MAX;

    while(low <= high)
    {
        int mid = (low + high)/2;
        int numberOfDays = findDays(weights, mid);
        if(numberOfDays <= d)
        {
            ans = mid;
            high = mid - 1; // find more min
        }
        else{
            low = mid + 1 ; // cann't be answer
        }

    }

    return ans; // low too
}

int main()
{
    return 0;
}