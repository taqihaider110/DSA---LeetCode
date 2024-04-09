#include<iostream>
using namespace std;
int Largestsum(int arr1[],int size1){
    long max=7;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size1-1;j++){
            if((arr1[i]+arr1[j])==max){
                max=arr1[i]+arr1[j];
                break;
            }
        }
    }
    cout<<"The Value of largest sum is "<<max<<endl;
    return max;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter elements for array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    Largestsum(arr,size);
    return 0;
}