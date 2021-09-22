#include<iostream>
using namespace std;

int print_array(int arr[3][2]){
    for(int i = 0;i<3;i++){
        for(int j=0;j<2;j++){
            cout << arr[i][j] << " ";
        }
    }
}

int main(){
    cout << "the array elements are: ";
    int arr[3][2] = {{1,2},
                     {3,4},
                     {5,6}};
    print_array(arr);
    return 0;
}
