#include<bits/stdc++.h>
using namespace std;


// 1. given row and column and find that element 
// in the pascal triangle

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

// 2. For the given  row number print that row from pascal triangle
void printRow(int n) {
    long long ans = 1;
    cout << ans << " "; // printing 1st element

    //Printing the rest of the part:
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;
}

// 3. Print whole pascal triangle
vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col = 1 ; col<row ; col++)
    {
        ans = ans*(row-col);
        ans = ans/(col);
        ansRow.push_back(ans);
    }
    return ansRow;
}


// better approach
// vector<int> majorityElement(vector<int> v) {
// 	vector<int> ls;
// 	map<int,int> mpp;
// 	int n = v.size();
// 	int mini = (int)n/3 + 1;
// 	for(int i = 0 ; i<n ; i++)
// 	{
// 		mpp[v[i]]++;
// 		if(mpp[v[i]] == mini) 
// 		ls.push_back(v[i]);

// 		if(ls.size() == 2) break;
// 	}
// 	sort(ls.begin(),ls.end());
// 	return ls;
// }

// optimal approach
vector<int> majorityElement(vector<int> v) {
int cnt1 = 0 , cnt2 = 0; int n = v.size(); 
int el1 = INT_MIN;
int el2 = INT_MIN;
for(int i = 0 ; i< v.size() ; i++)
{
	if(cnt1 == 0 && v[i]!=el2)
	{
		cnt1 = 1 ; 
		el1 = v[i];
	}
	else if(cnt2 == 0 && v[i]!=el1)
	{
		cnt2 = 1;
		el2 = v[i];
	}
	else if (v[i] == el1) cnt1++;
	else if(v[i] == el2) cnt2++;
        else {
                cnt1--;
                cnt2--;
        }
}

vector<int> ls;

cnt1 = 0 ; cnt2 = 0;

for(int i = 0 ; i<n;i++)
{
	if(v[i] == el1) cnt1++;
	if(v[i] == el2) cnt2++;
}
int mini = (int)(n/3) + 1;
if(cnt1 >= mini) ls.push_back(el1);
if(cnt2 >= mini) ls.push_back(el2);
sort(ls.begin(),ls.end());

return ls;

}

int maxProductSubArray(vector<int> &arr) {
    int n = arr.size(); //size of array.

    int pre = 1, suff = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (pre == 0) pre = 1;
        if (suff == 0) suff = 1;
        pre *= arr[i];
        suff *= arr[n - i - 1];
        ans = max(ans, max(pre, suff));
    }
    return ans;
}




vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> ans;
    for(int i = 1; i<=N ; i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main()
{
     int r = 5; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: "<< element << "\n";
    printRow(6);
    return 0;
}