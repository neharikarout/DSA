#include<bits/stdc++.h>
using  namespace std;

class Stack{
  int top = -1;
  int *arr;
  int stSize;

  public:
    Stack(int size){
     this -> stSize = size;
     arr = new int[size];
  }

  void push(int n){
    if(top > stSize-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        top++;
        arr[top] = n;
    }
  }

  void pop(){
    if(top < 0){
        cout<<"Stack underflow"<<endl;
    }
    else{
        top--;
    }
  }

  void peek(){
    if(top < 0){
        cout<<"Stack underflow"<<endl;
    }
    else{
        cout<<arr[top]<<endl;
    }
  }

  bool isEmpty(){
    if(top<0){
        return 1;
    }
    else{
        return 0;
    }
  }

};

int main(){

    // creation of stack
    stack<int> st;

    //push
    // st.push(1);
    // st.push(2);

    // //pop
    // st.pop();

    // //peek
    // cout<<st.top()<<endl;

    // // is empty
    // cout<<st.empty();

    Stack s(5);
    s.push(22);
    s.push(23);
    s.push(88);

    s.peek();

    s.pop();

    s.peek();

    bool ans = s.isEmpty();

    cout<<ans<<endl;

}