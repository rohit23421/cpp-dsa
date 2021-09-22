#include<bits/stdc++.h>
using namespace std;

void binary_to_decimal(string s){
    int base = 1;
    int length = s.length();
    int converted_value = 0;
    for(int i=length-1;i>=0;i--){
        converted_value += ((int)(s[i]-'0')*base);
        base *= 2;
    }
    cout << converted_value;
}
int main()
{
    string s;
    cout << "Enter the string value without spaces: ";
    cin >> s;
    binary_to_decimal(s);
    return 0;
}
