#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//BOOK ALLOCATION PROBLEM

// bool isPossible(int books[],int n,int m,int mid)
// {
//     int studentCount=1;
//     int pageSum=0;
//     for(int i=0;i<n;i++)
//     {
//         if(pageSum+books[i]<=mid)
//         {
//             pageSum+=books[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount>m || books[i]>mid)
//             {
//                 return false;
//             }
//             pageSum=books[i];
//         }
//     }
//     return true;
// }
// int bookAllocationProblem(int books[],int m,int n)
// {
//     int s = 0;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum=sum + books[i];
//     }
//     int e=sum;
//     int ans=-1;
//     int mid=s+(e-s)/2;

//     while(s<=e)
//     {
//         if(isPossible(books,n,m,mid))
//         {
//           ans=mid;
//           e=mid-1;  

//         }
//         else
//         {
//             s=mid+1;
//         }

//         mid=s+(e-s)/2;
        
//     }
//     return ans;
// }

// int main()
// {
//     int books[]={10,20,30,40,50};
//     int m=2;
//     int n=4;
//     int ans = bookAllocationProblem(books,m,n);
//     cout<<ans;
// }


//PAINTER'S PARTITION PROBLEM

// bool isPossible(int arr[],int k,int n,int mid)
// {
//  int painterCount=1;
//     int boardSum=0;
//     for(int i=0;i<n;i++)
//     {
//         if(boardSum+arr[i]<=mid)
//         {
//             boardSum+=arr[i];
//         }
//         else{
//             painterCount++;
//             if(painterCount>k || arr[i]>mid)
//             {
//                 return false;
//             }
//             painterCount=arr[i];
//         }
//     }
//     return true;
// }
// int painterPartition(int arr[],int k,int n)
// {
//     int s=0;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     int e=sum;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e)
//     {
//         if(isPossible(arr,k,n,mid))
//         {
//             ans=mid;
//             e-mid-1;
//         }
//         else{
//             s=mid+1;
//         }

//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

//  int main()
// {
//     int arr[]={10,20,30,40};
//     int k=2;
//     int n=4;
//     int ans = painterPartition(arr,k,n);
//     cout<<ans;
// }



// AGGRESSIVE COWS
bool isPossible(vector<int> stalls,int k,int mid)
{
    int cowCount=1;
    int lastPosition=stalls[0];

    for(int i=0;i<=stalls.size();i++)
    {
        if(stalls[i]-lastPosition>=mid)
        {
           cowCount++;
           if(cowCount==k)
           {
            return true;
           }
           lastPosition = stalls[i];
        }
    }
    return false;

}
int aggressiveCows(vector<int> stalls,int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=0;
    for(int i=0;i<stalls.size();i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e)
    {
        if(isPossible(stalls,k,mid))
        {
            ans= mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main()
{
    vector<int> stalls={4,3,1,2,6};
    int ans=aggressiveCows(stalls,2);
    cout<<ans;
}

