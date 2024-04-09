#include<iostream>
#include<cstring>
using namespace std;
//Replace character if any string has "a" in it with "0".
string ischaracter(string str){
    // int len=str.length();
    for(int i=0;i<str.length();i++){
        if(str[i] == 'a'){
            str[i] = '0';
        }
    }
        return str;
}
int main(){
    string str;
    cout<<"Enter string to check:"<<endl;
    cin>>str;
    string result=ischaracter(str);
    cout<<"String after replacing character:"<<result<<endl;
    return 0;
}