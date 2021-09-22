#include<iostream>
using namespace std;

bool check_if_sorted(int arr[],int n){
    for(int j=1;j<=n;j++){
        if(arr[j] < arr[j-1]){
            return false;
        }else{
            return true;
        }
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
        cout << "The array is: " << arr[i];
    }
    cout<< endl;
    if(check_if_sorted(arr,n)==true){
        cout << "Sorted";
    }else{
        cout << "Not Sorted";
    }
    return 0;
}
