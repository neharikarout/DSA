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



int floorSqrt(int n)
{
    int low = 1;
    int high = n;
    // int ans = 1;

    while(low<=high)
    {
        long long mid = low + (high - low)/2;
        long long val = mid * mid;

        if(val > n) 
        {
            // eliminate right
            high = mid -1;
        }

        else{
            // ans= mid; // might be answer go to right for larger
            low = mid + 1;
        }
   }

//    return ans;
      return high;
}


// finding nth root of a number m
// return 1 if == m
// return 0 if<m
// return 2 if>m

int f(int mid , int n , int m)
{
  long long ans = 1;
  for(int i = 1 ; i<=n ; i++)
  {
    ans = ans * mid;
    if(ans > m) return 2;
  }

  if(ans == m) return 1;

  return 0;
}


int NthRoot(int n, int m) {
   int low = 1;
    int high = m;

    while(low<=high)
    {
        long long mid = low + (high - low)/2;
        long long val = f(mid,n,m); 

        if(val == 1) return mid;

        else if(val == 0) 
        {
            // eliminate left
            low = mid + 1;
        }

        else{ // val > m (return 2)
            high = mid -1;
        }
   }

      return -1;
}

// koko eating bananas

int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &v, int hourly) {
    int totalH = 0;
    int n = v.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    int low = 1, high = findMax(v);

    //apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(v, mid);
        if (totalH <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}


// minimum days to make m boquets

bool possible(vector<int> &arr, int day, int m, int k) {
    int n = arr.size(); //size of the array
    int cnt = 0;
    int noOfB = 0;
    // count the number of bouquets:
    for (int i = 0; i < n; i++) {
        if (arr[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}
int roseGarden(vector<int> arr, int k, int m) {
    long long val = m * 1ll * k * 1ll;
    int n = arr.size(); //size of the array
    if (val > n) return -1; //impossible case.
    //find maximum and minimum:
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    //apply binary search:
    int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(arr, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
}



int main()
{
    return 0;
}