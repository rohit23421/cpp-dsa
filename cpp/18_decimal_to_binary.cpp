#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n){
        string converted_value = "";
        while(n > 0){
            int temp = n % 2;
            converted_value += to_string(temp);
            n /= 2;
        }
        reverse(converted_value.begin(),converted_value.end());
        return converted_value;
}
int main()
{
    int n;
    cout << "Enter the string value without spaces: ";
    cin >> n;
    cout << decimal_to_binary(n);
    return 0;
}
