//in struct everything is public bydefault and in class everything is private bydefault and we can make 
//private in structures and public in class
#include<iostream>
using namespace std;

struct point{
    int x;
    int y;
    point (int a,int b){
        x = a;
        y = b;
    }
    void print(){
        cout << x << " " << y << endl;
    }
};

int main(){
    
    point p(10,20);
    p.print();
    return 0;
}
