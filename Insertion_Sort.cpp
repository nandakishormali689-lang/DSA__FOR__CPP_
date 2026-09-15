#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int i,j,size,key;
    cout<<"Enter Size Of Array :";
    cin>>size;

    cout<<"Enter Array Element :";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    for(i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    cout<<"Sorted Array is :";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}