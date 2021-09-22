#include<iostream>
using namespace std;

int result=0;

int sum_array(int arr[],int n){
    for(int i=0;i<n;i++){
        result = result + arr[i];
    }
    return result;
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
    cout << "The sum of array is: ";
    cout << sum_array(arr,n);
    return 0;
}
