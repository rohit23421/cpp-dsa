#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    vector < vector < int >> matA(n, vector < int >(n, 0));
    vector < vector < int >> matB(n, vector < int >(n, 0));
    vector < vector < int >> res(n, vector < int >(n, 0));

    //input for matA
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin >> t;
            matA[i][j] = t;
        }
    }
    //input for matB
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin >> t;
            matB[i][j] = t;
        }
    }
    //multiplicating both the matrices
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[i][j] = 0;//for adding the multiplicated values of positions
            for(int k=0;k<n;k++){
                res[i][j] = res[i][j] + (matA[i][k] * matB[k][j]);
            }
        }
    }
    //printing the result
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

