#include<iostream>
using namespace std;

struct point {
    int x;
    int y;
};

typedef struct point_2 {
    int a;
    int b;
}Point;//we can use typedef to the struct we create and then make a variable here only without writing too
       //much code of <struct point_2 (variable)> and can use this var later
       
typedef struct student {
    int roll;
    string name;
    string address;
}student;

struct designated_initialization {
    int i;
    int j;
};

int main(){
    
    struct point p;//p is the varibale for the struct data-type and in cpp struct keyword is optional
                   //we can only write point p and that works same
    p.x =10;
    p.y = 15;
    cout << p.x << " " << p.y << endl;
    
    //for typedef struct point_2
    Point varPoint;//creating the variable for accessing the elements
    varPoint.a = 11;
    varPoint.b = 12;
    cout << varPoint.a << " " << varPoint.b << endl;
    
    //for student struct
    student varStudent = {277, "Rohit", "Assam"};
    cout << varStudent.roll << " "
         << varStudent.name << " "
         << varStudent.address << endl;
         
    //for designated_initialization where we can assgin struct values like this way and the benefti of
    //using this is that we can change the order of which the elements are accessed/assigned and also we
    //can skip the initialisation of any element
    //not initializing struct with any value will store anyt default garbage value
    struct designated_initialization initialize = {.j = 120, .i = 100};
    cout << initialize.i << " " << initialize.j << endl;
    
    return 0;
}
