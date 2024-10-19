#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string time = "";
    
    int h1 = (int)s[1] - '0';
    int h2 = (int)s[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    
    // If time is in "AM"
    if(s[8]=='A'){
        
        if(hh == 12){
            time+="00";
            for(int i = 2 ;i<=7;i++){
                time+=s[i];
            }
        }
        else{
            for(int i = 0 ;i<=7;i++){
                time+=s[i];
            }
        }
    }
    // If time is in "PM"
    else {
        if(s[8]=='P'){
            if(hh == 12){    
                for(int i = 0 ;i<=7;i++){
                time+=s[i];
                }
            }
            else{
                hh = hh + 12;
                time+= to_string(hh);
                for(int i = 2 ;i<=7;i++){
                    time+=s[i];
                }
            }
        }
    }    
    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
