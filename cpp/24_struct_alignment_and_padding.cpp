#include<iostream>
using namespace std;

struct S1
{
    char c1;
    double d1;
    char c2;
};

struct S2
{
    char c1;
    char c2;
    double d1;
};

struct S3
{
    double d1;
    char c1;
    char c2;
};

struct S4
{
    double d1;
    char e1;
    char e2;
}__attribute__((packed));//so it returns 10 not 16 that is actuall usage

int main()
{
    cout << sizeof(S1) << ' '
         << sizeof(S2) << ' '
         << sizeof(S3) << ' '
         << sizeof(S4) << endl;
    return 0;
}
