#include<iostream>
using namespace std;

int main(){

    int arr[100];
    int i,j,min,size,swap;

    cout<<"Enter Array Size :";
    cin>>size;

    cout<<"Enter Unsorted Array :";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    for(i=0;i<size;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[min])
                {
                min=j;
            }

            
        }
        swap=arr[i];
        arr[i]=arr[min];
        arr[min]=swap;         

    }

    cout<<"Sorted Array :";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}