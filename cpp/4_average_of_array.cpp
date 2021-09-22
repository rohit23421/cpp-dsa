#include<iostream>
using namespace std;

int result=0;

double average_of_array(int arr[],int n){
    for(int i=0;i<n;i++){
        result += arr[i];
    }
    return (result/double(n));
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "\n";
    cout << "The average of array is: ";
    cout << average_of_array(arr,n);
    return 0;
}
