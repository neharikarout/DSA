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

int main()
{
    return 0;
}