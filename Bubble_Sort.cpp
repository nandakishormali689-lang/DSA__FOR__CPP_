#include<iostream>
using namespace std;

int main(){
    int arr[100];

    int swap=0,i,sort,j,size;

    cout<<"Enter Size Of Array :";
    cin>>size;

    cout<<"Enter Unsorted Array :";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<size;i++){
        for(j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }

    cout<<"Sorted Array is :";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
