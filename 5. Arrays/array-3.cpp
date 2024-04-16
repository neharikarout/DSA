#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int xor1 = 0;
        int xor2 = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            xor2 = xor2^nums[i];
            xor1 = xor1^(i+1);
        }
        int result = xor1^xor2;
        return result;
    }


int maxConsecutiveOnes(vector<int> a)
{
}

 int singleNumber(vector<int>& nums) {
      int xorr = 0;
      for(int i= 0;i<nums.size();i++)
      {
        xorr = xorr^nums[i];
      }  
      return xorr;
    }


    
int main()
{
    vector<int> a;
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        a.push_back(element);
    }

    // int result = missingNumber(a);
    int result = maxConsecutiveOnes(a);
    cout<<result;

}