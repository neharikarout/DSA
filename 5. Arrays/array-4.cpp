#include<bits/stdc++.h>
using namespace std;

// optimal for both positives and negatives

int getLongestSubarray(vector<int>& a, int k){
    map<long long ,int> preSumMap;
   long long sum = 0;
   int maxLen =0;
   for(int i =0;i<a.size();i++)
   {
       sum+=a[i];
       if(sum == k)
       {
           maxLen = max(maxLen,i+1);
       }

       long long rem = sum - k;

       if(preSumMap.find(rem) != preSumMap.end())
       {
           int len = i - preSumMap[rem];
           maxLen = max(maxLen,len);
       }
        //edge case 
       if(preSumMap.find(sum) == preSumMap.end())
       {
           preSumMap[sum] = i;
       }
   }
   return maxLen;
}


// optimal for only positives

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int right = 0, left = 0;
    long long sum = a[0];
    int  n = a.size();
    int maxLen = 0;
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        
        if(sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if(right<n)  sum+=a[right];
    }
   return maxLen;
}

int main()
{

}