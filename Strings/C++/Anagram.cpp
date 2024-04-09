#include <iostream>
#include <cstring>
// #include<algorithm>
#include <stdbool.h>
using namespace std;
// Anagram in a string
//  bool Anagram(string str1,string str2){
//      if(str1.length()!=str2.length()){
//          return false;
//      }
//      string sortedStr1 = str1;
//      string sortedStr2 = str2;
//      sort(sortedStr1.begin(), sortedStr1.end());
//      sort(sortedStr2.begin(), sortedStr2.end());
//      return (sortedStr1 == sortedStr2);
//  }
// Anagram in a string
// bool Anagram(string str1, string str2)
// {
//     if (str1.length() != str2.length())
//     {
//         return false;
//     }
//     for (int i = 0; i < str1.length(); i++)
//     {
//         int index = str2.find(str1[i]);
//         if (index != -1)
//         {
//             str2.erase(index, 1);
//         }
//     }
//     if (str2.length() == 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// Anagram in a string
bool Anagram(string str1, string str2)
{
    bool flag=false;
    if (str1.length() != str2.length())
    {
        return false;
    }
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                flag=false;
                continue;
            }
            else{
                flag=true;
            }
        }
        if(flag==true){
            break;
        }
    }
    return !flag;
}
int main()
{
    string str1;
    cout << "Enter element of string1:" << endl;
    getline(cin, str1);
    string str2;
    cout << "Enter element of string2:" << endl;
    getline(cin, str2);
    if (Anagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    }
    else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}