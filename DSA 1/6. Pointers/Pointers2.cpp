#include<iostream>
using namespace std;

// int main()
// {
//     // int arr[4] = {12,14,24,18};
    
    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr<<endl;
    // cout<< &arr[0] <<endl;

    // int *p = arr;
    // cout<< p << endl;
    // cout<< &p <<endl;

    // cout<<*arr<<endl;
    // cout<<*arr + 1<<endl;
    // cout<<*(arr + 1)<<endl;
    // cout<<*(arr + 2)<<endl;

    // cout<< arr[2] <<endl;
    // cout<< 2[arr] <<endl;  // resolves into *(arr + i)

    // cout<<arr+2<<endl;
     
    //  p +=2;  //arr[2]
    //  cout<< *p<<endl;

//      int a[10];
//      cout<< sizeof(a)<<endl;

//      int *r  = a;
//      cout<< sizeof(r)<<endl; 

// cout<<sizeof(*r)<<endl;  // size of integer


     //  CHARACTER ARRAY AND POINTER

    //  char ch[10] = "Neharika";

    //  char *c = ch;
    //  cout<< ch <<endl;
    //  cout<< &ch <<endl;
    //  cout<< ch[0] <<endl;
    //  cout<< &c <<endl;
    //  cout<< c <<endl;
    //  cout<< *c <<endl;

    //  char name[10] = "Sher Bano";
    //  char *cptr = &name[0];

    //  cout << name << endl;
    //  cout << &name << endl;
    //  cout << *(name + 3) << endl;
    //  cout << cptr << endl;
    //  cout << &cptr << endl;
    //  cout << cptr + 2 << endl;
    //  cout << *cptr << endl;
    //  cout << cptr + 8 << endl;

    // char ch = 'k';
    // char *cptr = &ch;

    // cout << cptr <<endl;

    // char ch[10] = "Neharika";
    // char *c = "Neharika";  //bad practice

    // cout<< ch <<endl;
    // cout<< c <<endl;


             //  POINTERS AND FUNCTIONS

// void solve(int arr[])
// {
//     cout<< sizeof(arr)<<endl;
// }

// int main()
// {
//     int arr[10];
//     cout<<sizeof(arr)<<endl;
//     solve(arr);
// }

   
void func(int arr[]){
    cout << "inside function func\n";
    cout << arr << ' ' << *arr << ' ' << &arr << ' ' << sizeof(arr) << "\n\n";
}

void func2(int *arr){
    cout << "inside function func2\n";
    cout << arr << ' ' << *arr << ' ' << &arr << ' ' << sizeof(arr) << "\n\n";
}

int main()
{
   int arr[10] = {10,20};
        for(int i=0; i<5; i++)
            cout << arr[i] << ' ';
        cout<<'\n';
        cout << "outside function\n";
        cout << arr << ' ' << *arr << ' ' << &arr << ' ' << sizeof(arr) << "\n\n";
        func(arr);
        func2(arr);
    

    /*// pointers with functions 2
        int a = 5;
        int *ptr = &a;
        update(ptr);
        cout << a << '\n';
    */

    /*// why is it giving ERROR??
        int arr[] = {10,20,30,40,50};
        int *ptr = arr;
        // int *ptr2 = &arr;    // will give error
        int *ptr3 = &arr[0];
    */

}



