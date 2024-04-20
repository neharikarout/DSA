#include<bits/stdc++.h>
using namespace std;


vector<int> superiorElements(vector<int>&a) {
    int maxi = INT_MIN;
    int n = a.size();
    vector<int> ans;
    for(int i = n-1 ; i>=0 ; i-- )
    {
      if (a[i] > maxi) {
        ans.push_back(a[i]);
      }

      // keep track of right max
      maxi = max(maxi , a[i]);
    }

    sort(ans.begin() , ans.end());

    return ans;
}


int longestSuccessiveElements(vector<int>&a) {
    int longest = 1;
    int currCnt = 0;
    int lastSmaller = INT_MIN;

    sort(a.begin(),a.end());

    for(int i = 0 ; i<a.size() ; i++)
    {
        if(a[i] -1 == lastSmaller){
            currCnt+=1;
            lastSmaller = a[i];
        }

        else if(lastSmaller != a[i])
        {
            currCnt = 1;
            lastSmaller = a[i];
       }
       
       longest = max(longest,currCnt);
    }
return longest;
}

int main()
{
    return 0;
}