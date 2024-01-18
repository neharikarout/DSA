#include<iostream>
#include<vector>
using namespace std;

// int binarySearchInNearlySorted(vector<int>arr,int n,int target)
// {
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;

//     while(s<=e)
//     {
//         if(arr[mid]==target)
//         {
//             return mid;
//         }
//         if(mid-1>=s && arr[mid-1]==target)  //such that index does not go negative
//         {
//             return mid-1;
//         }
//         if(mid+1<e && arr[mid+1]==target) //such that index does not go out of bound
//         {
//             return mid+1;
//         }

//         if(arr[mid]<target)
//         {
//             e=mid-2; //mid-1 is already checked
//         }
//         else{
//             s=mid+2;//mid+1 is already checked
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n,target;
//     cout<<"Enter n:"<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter elements of array"<<endl;
//     for(int i=0;i<arr.size();i++)
//     {
//         cin>>arr[i];
//     }  
      
//     cout<<"Enter Target:"<<endl;
//     cin>>target;

//    int answer = binarySearchInNearlySorted(arr,n,target);
// cout<<target<<" at "<<answer<<" index "<<endl;


// int divideUsingBinarySearch(int divisor,int dividend)
// {
//     int ans=0;
//     int s=0;
//     int e=abs(dividend);
//     int  mid=s+(e-s)/2;
//     while(s<=e)
//     {
//         if(abs(mid*divisor) == abs(dividend))
//         {
//             ans=mid;
//             break; //we got the answer
//         }

//         if(abs(mid*divisor)<abs(dividend))
//         {
//             ans=mid; 
//             s=mid+1; //right search
//         }
//         else
//         {
            
//             e=mid-1; //left search
//         }
//         mid=s+(e-s)/2;
//     }

//     if((dividend<0 && divisor<0) || (dividend>0 && divisor>0)) 
//     {
//     return ans;
//     }
//     else{
//         return -ans;
//     }

// }

// int main()
// {
//     int dividend=22;
//     int divisor=-7;

//     int ans = divideUsingBinarySearch(divisor,dividend);

//     cout<<ans;
// }

int oddOccuringElement(vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(s==e)
        {
            return s;
        }
        //mid->even
        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            {
                //left me hain and ansswer right side me hai
                s=mid+2; //as mid+1 is already checked
            }
            else{
                //right side me hai and answer left side me hai
                e=mid; //because mid can be answer too
            }
        }

        //mid->odd

        else
        {
            if(arr[mid]==arr[mid-1])
            {
                //left side me hai and answer humara right side me hai
                s=mid+1; //mid+1 is not checked
            }
            else
            {
                //Right side me hain or answer left side me h
                e=mid-1; //mid-1 can be answer too;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}


        int main()
        {
            vector<int> arr={1,1,2,1,3,3,4,4,3,600,600,4,4};
            
            int ans = oddOccuringElement(arr);

            cout<<"Index is "<<ans<<" and value is "<<arr[ans];

            return 0;
        }


