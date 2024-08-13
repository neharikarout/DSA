#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s , int e){
    int mid = s + (e-s)/2;

    int len1 = mid-s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for(int i=0 ; i<len1 ; i++){
        first[i] = arr[k++];
    }

    k = mid + 1;
    for(int i = 0 ; i<len2 ; i++){
        second[i] = arr[k++];
    }

    // merge 2 sorted 
    int ind1 = 0;
    int ind2 = 0;
    int mainArrInd = s;

    while(ind1<len1 && ind2<len2){
        if(first[ind1] < second[ind2]){
            arr[mainArrInd] = first[ind1];
            ind1++;
            mainArrInd++;
        }
         else{
            arr[mainArrInd] = second[ind2];
            ind2++;
            mainArrInd++;
        }

    }
    while(ind1<len1){
         arr[mainArrInd] = first[ind1];
            ind1++;
            mainArrInd++;
    }
     while(ind2<len2){
         arr[mainArrInd] = second[ind2];
            ind2++;
            mainArrInd++;
    }
}

void mergeSort(int arr[],int s , int e){
    // base case 
    if(s>=e) return;

    int mid = s+(e-s)/2;

    // left part;
    mergeSort(arr,s,mid);
    // right part
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){

    int arr[10] = {5,78,45,12,69,11,44,23,789,57};
    int n = 10;

    mergeSort(arr,0,n-1);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}