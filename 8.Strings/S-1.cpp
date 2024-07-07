#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
        int cnt = 0;
        // string ans = "";
        // for(int i = 0 ; i<s.size() ; i++){
            
        //     if(s[i] == '(') cnt ++;
        //     else cnt--;

        //     if((s[i] == '(') && (cnt == 1)){
        //         continue;
        //     }

        //     else if(cnt == 0) continue;

        //     else ans.push_back(s[i]);

 
        // }
        // return ans;
       


       // using stack
       stack<char> st;
       string ans;

       for(int i = 0 ; i < s.size() ; i++){

        if(s[i] ==  '('){
            if(! st.empty()) ans.push_back(s[i]);

        st.push(s[i]);
       }
        else {
            st.pop();
            if(! st.empty()) ans.push_back(s[i]);
        }

        }
         return ans;
        
    }

//         REVERSE WORDS IN A STRING
string reverseWords(string s) {
int n = s.length();
stack<string>st;
string temp ="";
string ans = "";
for(int i =0;i<n;i++)
{
	if(s[i] == ' ')
	{
        if(temp.length() > 0)
             st.push(temp);
        temp ="";
	}
	else
	{
		temp+=s[i];
	}
}

ans+=temp;

while(!st.empty())
{
	ans+= " " + st.top();
	st.pop();
}
if(ans.length() != 0 && ans[0] == ' ') ans=ans.substr(1);
return ans;
}

int main(){

    char arr[5] = {'a','p','p','l','e'};
    cout<<arr;

    string s = "Neharika";
    cout<<s;
    
}