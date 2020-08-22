//https://www.hackerrank.com/challenges/2d-array/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int m = arr.size() - 1;
    int n = m;
    int result;
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            if(i > m - 2 || j > n - 2) break;
            
            int sum = arr[i][j]
            + arr[i][j+1]
            + arr[i][j+2]
            + arr[i+1][j+1]
            + arr[i+2][j]
            + arr[i+2][j+1]
            + arr[i+2][j+2];
            if(i == 0 && j == 0) result = sum;

            result = (sum > result) ? sum : result;
        }   
    }

    return result;
}