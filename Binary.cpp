#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int l=0,e=size-1,mid=(l+e)/2;
    cout<<"Enter a number from 1 to 9:";
    int n;
    cin>>n;
    while(l<=e){
        if(arr[mid]==n){
            cout<<"Index of entered number is:"<<mid<<endl;
            break;
        }
        else if(arr[mid]>n){
            e=mid-1;
            mid=(e+l)/2;
        }
        else{
            l=mid+1;
            mid=(e+l)/2;
        }
    }
}