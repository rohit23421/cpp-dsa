#include <iostream>
using namespace std;

int main(){	
	int m = 3, n = 2;
	int *arr[m];
    // fixed array of pointer pointing to arrays where the main pointer array is assigned already as m=3
	for(int i = 0; i < m; i++)
		arr[i] = new int[n];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			arr[i][j] = 10;	
			cout << arr[i][j] << " ";
		}
	}
	return 0;
}
