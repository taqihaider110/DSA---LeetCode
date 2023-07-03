#include <iostream>
#include<cstring>
using namespace std;
// Numeric string to integer conversion
int Numeric(string str)
{
    int num = 0;
    for (int i = 0; i < str.length(); i++)
    {
        num = num * 10 + str[i]-'0';
    }
    return num;
}
int main()
{
    string str;
    cin >> str;
    cout<<"Enter the String:"<<endl;
    cout << Numeric(str);
    return 0;
}