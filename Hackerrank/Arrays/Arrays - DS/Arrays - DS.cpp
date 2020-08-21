//https://www.hackerrank.com/challenges/arrays-ds/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
    vector<int> result;

    for(int i = a.size() - 1; i >= 0; i--) {
        result.push_back(a[i]);
    }

    return result;
}
