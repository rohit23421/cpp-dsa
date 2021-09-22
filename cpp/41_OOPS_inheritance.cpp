#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
        string name;
        int id;
    public:
        Person(string n, int i){
            name = n;
            id = i;
        }
};
class Student : public Person{
    private:
        int marks;
    public:
        Student(string n, int i, int m): Person(n, i),marks(m){
           
        }void print(){
            cout << "Name: " << name << "\n" << "ID: " << id << "\n" << "Marks: " << marks << endl;
        };
};
int main(){
    Student stu("Rohit", 277, 90);
    stu.print();
}
