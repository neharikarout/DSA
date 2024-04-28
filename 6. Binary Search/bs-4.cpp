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



int main()
{
    return 0;
}