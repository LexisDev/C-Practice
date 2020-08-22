//https://www.hackerrank.com/challenges/dynamic-array/problem
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seq(n);
    int last = 0;
    int length = queries.size();
    vector<int> result;
    for(int i = 0; i < length; i++) {
        int k = (last ^ queries[i][1]) % n;
        if(queries[i][0] == 1) {
            seq[k].push_back(queries[i][2]);
        }
        else if(queries[i][0]==2) {
            int index = queries[i][2]%(seq[k].size());
            last = seq[k][index];
            result.push_back(last);
        }
    }
    
    return result;
}