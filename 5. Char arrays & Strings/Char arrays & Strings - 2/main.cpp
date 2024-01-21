#include<iostream>
#include<cstring>

using namespace std;

//                   CHAR ARRAYS & STRINGS -2

//   REMOVE ALL ADJACENT DUPLICATES IN A STRING

// string removeAjacentDuplicates(string s)
// {
//     string ans="";
//     int i=0;
//     while(i<s.length())
//     {
//         if(ans.length()>0)
//         {

//         if(ans[ans.length()-1] == s[i])
//         {
//             ans.pop_back();
//         }

//         else{
//             ans.push_back(s[i]);
//         }
//         }

//           else{
//             ans.push_back(s[i]);
//         }
//         i++;
//     }
//     return ans;

// }

// string removeOccurences(string s,string part)
// {
//     int pos=s.find(part);
//     while(pos != string::npos)
// {
//     s.erase(pos,part.length());
//     pos=s.find(part);  //looping variable
// }
// return s;
// }


//  bool checkPalindrome(string s, int i, int j)
//  {
//      while(i<=j)
//      {
//     if(s[i]==s[j])
//     {
//         i++;
//         j--;
//     }
//     else{
//         return false;
//     }
//      }
//     return true;
//  }
//     bool validPalindrome(string s)
//      {
//         int i=0;
//          int j=s.length()-1;
//          while(i<=j)
//        {
//          if(s[i]==s[j])
//          {
//             //following palindriome property so no removal
//             i++;
//             j--;
//          }
//          else{
//             //s[i]!=s[j] means either remove i or j
//             return checkPalindrome(s,i+1,j)||checkPalindrome(s, i, j-1);
//              }
//         }
//         return true;//for 0 removal

//     }  



// MINIMUM TIME (539) LEETCODE
//  int findMinDifference(vector<string> timePoints) {
//     int n = timePoints.size();
//     vector<int>minutes;

//     // convert time (string) to minutes (int)
//     for(int i=0; i<n; i++){
//         string curr = timePoints[i];
//         int hours = stoi( curr.substr(0,2) );
//         int mins = stoi( curr.substr(3,2) );
//         int totalMinutes = hours*60 + mins;
//         minutes.push_back(totalMinutes);
//     }

//     sort(minutes.begin(), minutes.end());
    
//     int mini = INT_MAX;
//     for(int i=0; i<n-1; i++){
//         int diff = minutes[i+1] - minutes[i];
//         mini = min(mini, diff);
//     }

//     // for ex - 00:00 and 23:59    
//     int lastDiff = minutes[0]+1440 - minutes[n-1];      //1440 mins in 24 hours
//     mini = min(mini, lastDiff);

//     return mini;
// }
// int main()
// {
// //     string s="adaabcbaabcbc";
// //     string part="abc";
// //      string ans = removeOccurences(s,part);
// //     // string ans=removeAjacentDuplicates(s);
// //     cout<<ans;
// }


//  PALINDROMIC SUBSTRINGS


// int expandAroundIndex(string s,int i,int j)
//     {   //jab tak match krega tab tk count increment and i piche and j aage krte rho
//          int count=0;
//         while(i>=0 &&j<s.length() && s[i]==s[j])
//         {
//             count++;
//             i--;
//             j++;
//         }
//         return count;
//     }
//     int countSubstrings(string s) {
//         int count=0;
//         int n=s.length();
//         for(int i=0;i<n;i++)
//         {
//             //odd

//             int oddAns = expandAroundIndex(s,i,i);
//             count=count+oddAns;
//             //even
//             int evenAns = expandAroundIndex(s,i,i+1);
//             count=count+evenAns;

//         }

//         return count;
//     }