#include<iostream>
using namespace std;

int main(){
    string name = "rohit";
    cout << "Original string: " << name << endl;
    string reverse_name = "";
    int length = name.length();
    for(int i=length;i>=0;i--){
        reverse_name += name[i];
    }
    cout << "Reversed string: " << reverse_name;
    return 0;
}
