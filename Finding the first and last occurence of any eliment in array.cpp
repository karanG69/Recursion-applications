#include <iostream>

using namespace std;
int firstocc(int arr[],int n,int key,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,key,i+1);
}/*
int lastocc(int arr[],int n,int key,int i){
    if(i<0){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return lastocc(arr,n,key,i-1);
}*/
int lastocc(int arr[],int n,int key,int i){
    if(i==n){
        return -1;
    }
    int restarr=lastocc(arr,n,key,i+1);
    if(restarr!=-1){
        return restarr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of the array-";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element-";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key-";cin>>key;
    cout<<"First_occu="<<firstocc(arr,n,key,0)<<endl;
    cout<<"Last_occu="<<lastocc(arr,n,key,0)<<endl;
    /*Iint arr[]={1,2,3,4,5};
    cout<<firstocc(arr,5,5,0);*/
    return 0;
}
