#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int i,found=0,size,element;
    cout<<"Enter Size of Array :";
    cin>>size;
    cout<<"Enter Array :";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter Element Wants To Search :";
    cin>>element;
    for(i=0;i<size;i++){
        if(arr[i]==element){
            cout<<"Element Found At "<<i<<" Location";
            found=1;
            break;
        }
    }
    if (found!=1){
        cout<<"Element Not Found";
    }
     
    return 0;
}