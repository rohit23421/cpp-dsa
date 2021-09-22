#include<iostream>
using namespace std;

int maximum_value=0;

int maximum_of_array(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i] > arr[i+1]){
            maximum_value = arr[i];
        }
    }
    return maximum_value;
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
    cout << "The maximum of array is: ";
    cout << maximum_of_array(arr,n);
    return 0;
}
