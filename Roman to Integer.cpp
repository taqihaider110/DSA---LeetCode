// Roman to Integer in C++- Leet Code Solution
#include <iostream>

using namespace std;

int romanToInt(string s) {
    int result = 0;
    int prevValue = 0;

    for (int i = s.size() - 1; i >= 0; --i) {
        int value;
        switch (s[i]) {
            case 'I': value = 1; break;
            case 'V': value = 5; break;
            case 'X': value = 10; break;
            case 'L': value = 50; break;
            case 'C': value = 100; break;
            case 'D': value = 500; break;
            case 'M': value = 1000; break;
            default: return 0; // Invalid character
        }
        if (value < prevValue) {
            result -= value;
            cout<<" result is :"<<result<<endl;
        } else {
            result += value;
            cout<<" result is :"<<result<<endl;
        }
        prevValue = value;
        cout<<"Prev Value:"<<prevValue<<endl;
    }

    return result;
}

int main() {
    string romanNumeral = "MMXXIV"; // Example: MMXXIV -> 2024
    int integerEquivalent = romanToInt(romanNumeral);
    cout << "Integer equivalent of " << romanNumeral << " is: " << integerEquivalent << endl;
    return 0;
}
