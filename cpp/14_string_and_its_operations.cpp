#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string stringValue = "thisIsFrom_strVariable";
    cout << stringValue;
    //length function to find the length of stringValue
    cout <<"\n" << "size of (str) string is: " << stringValue.length() << endl;
    //to concatenate a value to the end of the stringValue
    stringValue = stringValue + "_xyz";
    cout << stringValue << endl;
    //to display from a particular index to whole stringValue
    cout << stringValue.substr(1) << endl;
    //to find the substring from the 1th position to the length 3
    cout << stringValue.substr(1, 3) << endl;
    //to find the stringValue part that is pased inside the string and return the index of it
    //also this returns the index of first occurence of that parameter we search for
    cout << stringValue.find("Fr") << endl;
    
    //to return the value if found the element we want or match it to a constant value(npos) 
    int res = stringValue.find("egdsh");
    if(res == string::npos)//npos is a constant where the string part we want to find searches it and if not found matches with npos and return the statement
        cout << "Not Present\n";
    else
        cout << "First Occurence at index " << res << endl;
    
    //comparing strings lexicographically 
    string s1 = "bcd";
    string s2 = "abc";
    
    if(s1 == s2)
        cout << "Same";
    else if(s1 < s2)
        cout << "Smaller";
    else
        cout << "Greater";
    
    //taking whole input as a string including spaces
    string name;
    cout << endl << "Enter your name \n";
    getline(cin, name);
    cout << "Your name is " << name << endl;
    //we can also stop to read after encountering a particular value like (@)
    string new_name;
    cout << "Enter new_name \n";
    cin >> new_name;
    getline(cin,new_name,'@');
    cout << "Your new name is " << new_name << endl;
    
    //traversing a string
    string str = "rohit";
    //1st way
    for(int i = 0; i < str.length(); i++)
        cout << str[i];
    cout << endl;
    //2nd way
    for(char x: str)
        cout << x;
    cout << endl;
    //3rd way
    for(auto it = str.begin(); it != str.end(); it++)
        cout << (*it);
        
    //strlen() function requires <cstring> header
    char s11[] = "rohit";
    char s22[] = {'c', 'p', 'p', '\0'};
    cout <<endl << strlen(s11) << "\n";
    cout << strlen(s22) << "\n";
    
    //strcmp() fucntion to compare string lexicographically
    int res_string = strcmp(s11, s22);
    if(res_string == 0) cout << "Same";
    else if(res_string < 0) cout << "Smaller \n";
    else cout << "Greater \n";
    
    //strcpy() fucntion for assigning value to the string array later automatically
    char string_array[5];
    strcpy(string_array, "rohit");
    cout << string_array;
    
    return 0;
}
