#include<bits/stdc++.h>
using namespace std;

  void rotate(vector<vector<int>>& mat) {
        	int n = mat.size();
	// step 1 : transpose i.e traverse upper half triangle and swap

	for(int i = 0 ; i<n-1 ; i++)
	{
		for(int j = i + 1 ; j<n ; j++)
		{
			swap(mat[i][j] , mat[j][i]);
		}
	}

	// step 2 : reverse all rows
	for(int i = 0 ; i<n ; i++)
	{
		// row is mat[i]
		reverse(mat[i].begin(),mat[i].end());
	}
	
    }

    vector<int> spiralMatrix(vector<vector<int>>&mat) {
   int n = mat.size();
   int m = mat[0].size();

   vector<int> ans;

   int left = 0; int right = m-1;
   int top = 0; int bottom = n-1;

while(top <= bottom && left <= right)
{
   for(int i = left ; i<=right ; i++)
   {
       ans.push_back(mat[top][i]);
   }
   top++;

   for(int i = top ; i<= bottom ; i++)
   {
       ans.push_back(mat[i][right]);
   }
   right--;
   
   if(top <= bottom)
   {
       for (int i = right; i >= left; i--) {
         ans.push_back(mat[bottom][i]);
       }
       bottom--;
   }

  if(left <= right)
  {
       for (int i = bottom; i >= top; i--) {
         ans.push_back(mat[i][left]);
       }
       left++;
  }
  
}

return ans;
}



int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    map<int,int> mpp;
    mpp[0] = 1;
    int preSum = 0 , cnt = 0;
    for(int i = 0 ; i<arr.size() ; i++)
    {
        preSum += arr[i];
        int remove = preSum -k;
        cnt +=mpp[remove];
        mpp[preSum] += 1;
    }

return cnt;

}


int main()
{
    return 0;

}