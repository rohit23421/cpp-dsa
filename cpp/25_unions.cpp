#include<iostream>
using namespace std;

union Test{
    int x;
    int y;
};

union Test_2{
    int x_1;
    char y_1;
    double z_1;
};

//for type punning
union Test1
{
    int x1;
    float y1;
};

union Test2
{
  int x2;
  char bin[4]; 
};

int main()
{
    Test t;
    t.x = 10;
    cout << t.x << ' ' << t.y << '\n';
    t.y = 20;
    cout << t.x << ' ' << t.y << '\n';
    cout << sizeof(t) << endl;
    
    //for Test_2
    cout << sizeof(Test_2) << endl;
    
    //for Test1 and Test2 => Type punning
    Test1 t1;
    t1.y1 = 1.1;
    cout << t1.x1 << '\n';
    
    Test2 t2;
    t2.x2 = 512;
    cout << (int)t2.bin[0] << " " << (int)t2.bin[1] << " "
         << (int)t2.bin[2] << " " << (int)t2.bin[3]; 
    
    return 0;
}
