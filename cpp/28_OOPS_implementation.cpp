#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int imag;
    public:
        void print(){
            cout << real << "+" << imag << "i" << endl;
        }
        complex(int r,int i){
            real = r;
            imag = i;
        }
};
int main(){
    complex c1(10,15);
    c1.print();
    return 0;
}
