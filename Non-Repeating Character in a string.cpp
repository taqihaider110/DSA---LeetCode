#include<iostream>
#include<cstring>
using namespace std;
//Non-repeating character in a string
string non_repeatingcharacter(string str){
    string temp;
    int signed len=str.length();
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(str[i]!=str[j]){
                temp=str[j];
            }
        }
    }
    return temp;
}
int main(){
    string str;
    cout<<"Enter any string to check:"<<endl;
    cin>>str;
    string str1=non_repeatingcharacter(str);
    cout<<"String after Non-Repeating character is :"<<str1;
    return 0;
}