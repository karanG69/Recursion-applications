#include <iostream>
using namespace std;
bool sorted_ascending(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray=sorted_ascending(arr+1,n-1);
    return restarray && arr[0]<arr[1];
}
bool sorted_descending(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray=sorted_descending(arr+1,n-1);
    return restarray && arr[0]>arr[1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sorted_ascending(arr,n)){
        cout<<"Array is sorted in the ascending order";
    }
    else{
        if(sorted_descending(arr,n)){
            cout<<"Array is sorted in descending order";
        }
        else{
            cout<<"Array is not sorted";
        }
    }
    return 0;
    
}
