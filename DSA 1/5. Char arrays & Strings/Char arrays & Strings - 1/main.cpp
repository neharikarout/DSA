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





