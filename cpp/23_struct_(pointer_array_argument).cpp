#include<iostream>
using namespace std;

struct point {
    int x;
    int y;
};

struct point_array{
    int a;
    int b;
};

struct Point_new
{
  int x;
  int y;
};

void print(Point_new q)
{
    cout << q.x << ' ' << q.y << '\n'; 
}

struct Student
{
  int roll;
  int age;
  string name;
  string address;
};

void print(const Student &s)
{
   cout << "Roll: " << s.roll << ' ' << endl
        << "Name: " << s.name << ' ' << endl
        << "Age: " << s.age  << ' ' << endl
        << "Address: " << s.address;
}

int main(){
    
    point p = {10,20};
    point *ptr = &p; //accessing the address of the p varibale by the (ptr) pointer
    cout << ptr->x << " " << ptr->y << endl;//(->) is used to access the elements/members when stored using pointer
    ptr->x = 30;
    cout << p.x << endl;    
    
    //for point_array
    point_array arr[5];
    for(int i=0;i<5;i++){
        arr[i].a = i;
        arr[i].b = i * 10;
    }
    for(int i=0;i<5;i++){
        cout << arr[i].a << " "
             << arr[i].b << endl;
    }
    
    //for Point_new
    Point_new q = {10,20};
    print(q);
    
    //for Student
    Student s = {2323, 20, "Rohit", "Assam"};
    print(s);
        
    return 0;
}
