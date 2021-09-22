#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int start = 0;
    int end = s.length() - 1;
    while(start < end){
        if(s[start] != s[end]){
            cout << "No, it's not a palindrome";
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    cout << "Yes, it's a palindrome";
    
    return 0;
}
