//https://www.hackerrank.com/challenges/sparse-arrays/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result;

    for(int i = 0; i < (int)queries.size(); i++) {
        int count = 0;
        for(int j = 0; j < (int)strings.size(); j++) {
            if(queries[i] == strings[j]) count++;
        }
        result.push_back(count);
    }

    return result;
}