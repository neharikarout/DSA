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


int main()
{
    return 0;

}