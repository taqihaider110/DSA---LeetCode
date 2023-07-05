#include<iostream>
#include<array>
using namespace std;
//Array Manipulation
//If element of both array same pass it to new array and if different then make another array and pass it
int Arr(int arr1[],int size1,int arr2[],int size2){
    int samearr[100],differentarr[100];
    int samecount=0;
    int differentcount=0;
    for(int i=0;i<size1;i++){
        bool found=false;
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                found=true;
                break;
            }
        }
        if(found){
            samearr[samecount]=arr1[i];
            samecount++;      
        }
        else{
            differentarr[differentcount]=arr1[i];
            differentcount++;
        }
    }
    cout<<"The array of same element is :"<<endl;
    for(int i=0;i<samecount;i++){
        cout<<samearr[i]<<" ";
    }
    cout<<endl;
    cout<<"The array of different element is :"<<endl;
    for(int i=0;i<differentcount;i++){
        cout<<differentarr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main(){
    int size1,size2;
    cout<<"Enter the size of arr1:"<<endl;
    cin>>size1;
    int arr1[size1];
    for(int i=0;i<size1;i++){
        cout<<"Enter Elements of arr1:"<<endl;
        cin>>arr1[i];
    }
    cout<<"Enter the size of arr2:"<<endl;
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        cout<<"Enter Elements of arr2:"<<endl;
        cin>>arr2[i];
    }
    Arr(arr1,size1,arr2,size2);
    return 0;
}