#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Enter the values of x and y: ";
    cin >> x >> y;
    try{
        if(y == 0){
            throw 0;
        }
        cout << "Result is: " << x/y;
    }catch(int x){
        cout << "Divisor is 0";
        }
    return 0;
}
