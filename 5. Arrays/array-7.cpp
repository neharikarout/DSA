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


// better
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



// optimal
int longestConsecutiveSubsequence(vector<int>&a) {

int n = a.size();
if(n == 0) return 0;
int longest = 1;
unordered_set<int> st;
for(int i = 0 ; i<n ; i++)
{
    st.insert(a[i]);
}

for(auto it:st)
{
    if(st.find(it-1) == st.end()){
        int cnt = 1;
        int x = it;
        while(st.find(x+1) != st.end())
        {
            x = x+1;
            cnt = cnt + 1;
        }
        longest = max(longest,cnt);
    }
}

return  longest;
}

int main()
{
    return 0;
}