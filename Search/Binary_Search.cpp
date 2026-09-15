#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int mid , high , low , found ,i ,element , size;
    cout<<"Enter Size Of Array :";
    cin>>size;
    cout<<"Enter Array Elements :";
    for ( i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Element Wants to Search :";
    cin>>element;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element){
            cout<<"Elment Found "<<mid;
            found=1;
            break;
        }
        else if (arr[mid]>element)
        {
            high=mid-1;
        }
        else if (arr[mid]<element)
        {
            low=mid+1;
        }
        
    }
    if (found!=1)
    {
        cout<<"Element Not Found";
    }
    
    
    

    return 0;
}