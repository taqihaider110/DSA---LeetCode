#include<iostream>
#include<cstring>
using namespace std;
//Non-repeating character in a string
string non_repeatingcharacter(string str){
    int signed len=str.length();
    string temp;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(str[i]==str[j]){
                
                break;    
            }
            else{
                temp=str[i];
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