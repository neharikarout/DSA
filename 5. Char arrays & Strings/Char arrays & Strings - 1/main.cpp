#include<iostream>
#include<cstring>
using namespace std;

// int getlength(char name[])
// {
//     int length=0;
//     int i=0;
//     while(name[i] !='\0')
//     {
//         length++;
//         i++;

//     }
//     return length;
// }

// int main()
// {
// //     char ch[50];
// //     cin>>ch[3];
// //     cin>>ch[49];
// //     cin>>ch;
// //     cin.getline(ch,50);
//     char arr[100];
//     cin>>arr;
// //    cin.getline(arr,50);
//     cout<<"Name : "<<arr<<endl;
//     int ans=getlength(arr);
//     cout<<ans<<endl;
//     // cout<<strlen(arr);
// // 
// }

//REVERSE A STRING

// int main()
// {
//     char arr[100];
//     cin>>arr;

//     int i=0;
//     int n= strlen(arr);
//     while(i!=n-i-1)
//     {
//         swap(arr[i],arr[n-i-1]);

//         i++;
//     }

//     cout<<arr;

// }


// REPLACE SPACES WITH SYMBOL

// void replace(char arr[])
// {
//     int i=0;
//     int n=strlen(arr);

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==' ')
//         {
//             arr[i]='@';
//         }
//     }
//     cout<<arr;
// }

// int main()
// {
//     char arr[50];
//     cin.getline(arr,50);

//     replace(arr);

//     return 0;

// }


//PALINDROME

// bool palindrome(char arr[])
// {
//     int i=0;
//     int n=strlen(arr);
//     int j=n-1;
//      while(i<=j)
//      {
//         if(arr[i]==arr[j])
//         {
//             i++;
//             j--;
//         }
//         else {
//             return false;
//         }
//      }
//      return true;
// }

// int main()
// {
//     char arr[50];
//     cin>>arr;

//     int ans=palindrome(arr);

//     if(ans)
//     {
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"not palindrome";
//     }


// }


//CONVERT TO UPPERCASE

// void convertToUpperCase(char arr[]){
//     int n=strlen(arr);
//     int i=0;
//     while(i<n)
//     {
//         if(arr[i]>='a' && arr[i]<='z')
//         arr[i]=arr[i]-'a'+'A';
//         i++;
//     }
// }
// int main()
// {
//     char arr[50];
//     cin>>arr;
//     convertToUpperCase(arr);

//     cout<<arr;

// }




//               STRINGS

// bool compare(string a,string b)
// {
//     if(a.length() != b.length())
//     {
//         return false;
//     }
//         int j=0;
//         for(int i=0;i<=a.length();i++)
//         {
//             if(a[i] != b[j])
//             {
//                 return false;
//             }
//             j++;
//         }
//     return true;
// }

// int main()
// {
//     //string creation
//     // string str;
//     // //cin>>str;
//     // getline(cin,str);
//     // cout<<str<<endl;
//     // cout<<"length "<<str.length()<<endl;
//     // cout<<"is Empty "<<str.empty()<<endl;
//     // cout<<"push back ";str.push_back('A');cout<<str<<endl;
//     //  cout<<"pop back ";str.pop_back();cout<<str<<endl;
//     //  cout<<str.substr(0,3)<<endl;

//     //  string a ="Love";
//     //  string b="Lover";

//     // //  int ans=a.compare(b);
//     //  int ans2=compare(a,b);
//     //  if(ans2==0)
//     //  {
//     //     cout<<"a and b are same";
//     //  }
//     //  else{
//     //     cout<<"a and b are not same ";
//     //  }
// string sentence= "hello everyone";
// string target="hi";

// // cout<<sentence.find(target);
// // if(sentence.find(target) == std::string::npos)
// // {
// //     cout<<"Not found"<<endl;
// // }

// // sentence.replace(0,5,target);
// // cout<<sentence<<endl;

// sentence.erase(0,2);
// cout<<sentence;





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
int main()
{
//     string s="adaabcbaabcbc";
//     string part="abc";
//      string ans = removeOccurences(s,part);
//     // string ans=removeAjacentDuplicates(s);
//     cout<<ans;
}
