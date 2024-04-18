#include<bits/stdc++.h>
#include<map>
using namespace std;

// better solution for Two Sum  but optimal if have to return index

string read(int n, vector<int> book, int target)
{
    map<int,int> mpp;
    for(int i = 0 ; i<n ; i++)
    {
        int a = book[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end())
        {
            return "YES";   // return {mpp[more],i};
        }
        mpp[a] = i;
    }
    return "NO";
}


// optimal

string read(int n, vector<int> book, int target)
{
  int left = 0; int  right = n-1;
  sort(book.begin(),book.end());
  while(left<right)
  {
      int sum = book[left] + book[right];
      if(sum == target)   return "YES";

      else if(sum<target) left++;  // increment

      else  right--;  // decrement
  }
    return "NO";
}


void sortArray(vector<int>& arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high)
    {
        if(arr[mid] == 0)  
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    
}

int main()
{

}