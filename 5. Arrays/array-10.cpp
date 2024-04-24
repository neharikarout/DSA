#include<bits/stdc++.h>
using namespace std;

// Brute force
vector<vector<int>> triplet(int n , vector<int> num)
{
    set<vector<int>> st;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            for(int k = 0 ; k<n ; k++)
            {
                if(num[i] + num[j] + num[k] == 0)
                {
                    vector<int> temp = {num[i] , num[j]  , num[k]};
                    sort(temp.begin() ,temp.end());
                    st.insert(temp);
                }
            } 
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// better
 vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;
    for(int i = 0 ; i<n ; i++)
    {
        set<int> hashset;
        for(int j = i+1 ; j<n ; j++)
        {
            int third = -(arr[i] + arr[j]);
            if(hashset.find(third) != hashset.end())
            {
                vector<int> temp = {arr[i] , arr[j] , third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    //  store
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

// optimal
vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>> ans;
        sort(num.begin(),num.end());
        int n = num.size();
        for(int i = 0 ; i<n ; i++)
        {
            if(i>0 && num[i] == num[i-1] )  continue;    
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int sum = num[i] + num[j] + num[k];
                if(sum<0 ) j++;
                else if(sum == 0)
                {
                    vector<int> temp = {num[i] , num[j] ,num[k]};
                    ans.push_back(temp);
                    j++;k--;
                    while(j<k && num[j] == num[j-1]) j++;
                    while(j<k && num[k] == num[k+1]) k--;
                }
                else{
                    k--;
                }
            } 
       }
       return ans;
    }
int main()
{
    return 0;
}