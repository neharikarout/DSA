#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> arr)
{
    int n=arr.size();
    

    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(vector<int> arr)
{
    int n=arr.size();

    for(int i=0;i<n-1;i++)  //for round 1 to n-1
    {
        for(int j=0;j<n-i;j++)
        {
        
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
     for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr={10,1,7,6,14,9};
    bubbleSort(arr);
    return 0;
}