#include<iostream>
using namespace std;

struct complex_numbers{
    int real,imag;
};

int main(){
    
    complex_numbers num1,num2,result;
    cout << "Enter the real and imaginary part of the numbers: ";
    cin >> num1.real >> num1.imag;
    cin >> num2.real >> num2.imag;
    
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    
    cout << "THe sum of complex numbers is: " << result.real << " + " << result.imag << "i";
    
    return 0;
}
