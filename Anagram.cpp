#include<iostream>
#include<cstring>
#include<algorithm>
#include<stdbool.h>
using namespace std;
//Anagram in a string
bool Anagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    string sortedStr1 = str1;
    string sortedStr2 = str2;
    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());
    return (sortedStr1 == sortedStr2);
}
int main(){
    string str1;
    cout<<"Enter element of string1:"<<endl;
    getline(cin,str1);
    string str2;
    cout<<"Enter element of string2:"<<endl;
    getline(cin,str2);
    if(Anagram(str1,str2)){
        cout<<"Strings are Anagram"<<endl;
    }
    else{
        cout<<"String are not Anagram:"<<endl;
    }
    return 0;
}