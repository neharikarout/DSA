#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    long long  maxi = LONG_MIN;
    long long  sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum+=arr[i];

        maxi = max(maxi,sum);

        if (sum < 0) {
          sum = 0;
        }
    }

    if(maxi < 0) maxi = 0;

    return maxi;
}


int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int mini  = prices[0];
    int maxProfit = 0;
    for(int i = 0; i<prices.size() ; i++)
    {
        int cost =  prices[i] - mini;
        maxProfit = max(maxProfit,cost);
        mini = min(mini,prices[i]);
    }
    return maxProfit;
}

vector<int> alternateNumbers(vector<int>&a) {
   int pos = 0;
   int neg = 1;
   int n = a.size();
   vector<int> ans(n,0);
    for(int i = 0; i<a.size() ; i++)
    {
        if(a[i] > 0)
        {
            ans[pos] = a[i];
            pos+=2;
        }

        else {
            ans[neg] = a[i];
            neg += 2;
        }
    }

    return ans;
}


vector<int> nextGreaterPermutation(vector<int> &a) {
   int index = -1;
   int n = a.size();
   for(int i = n-2 ; i>=0 ; i--)
   {
       if(a[i] < a[i+1])
       {
           index = i;
           break;
       }
   }

   if(index == -1){
       reverse(a.begin() , a.end());
       return a;
   }

   for(int i = n-1 ; i>index ; i--)
   {
       if(a[i] > a[index])
       {
           swap(a[i],a[index]);
           break;
       }
   }

   reverse(a.begin() + index + 1 , a.end());
   return a;
}

int main()
{

    return 0;

}