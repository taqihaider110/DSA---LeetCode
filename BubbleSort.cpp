#include<iostream>
#include<algorithm>
using namespace std;
void bubblesort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
int main(){
    int s;
    cout<<"Enter the size of an array\n";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
        cout<<"Enter the element of index " << i<< " of array: "<<endl;
        cin>>arr[i];
    }
    sort(arr,arr+s);//Build in function for sort
    // cout<<"Original Array:-"<<endl;
    // for(int i=0;i<s;i++){
    //     cout<<arr[i]<<" ";
    // }
    // bubblesort(arr,s);
    cout<<"\nAfter Sorting:-"<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}