class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> result;
       int n = numRows;
        for(int i=0; i<n; i++){
        vector<int> row;
        long long ans = 1;
        row.push_back(1);
        for(int j =1; j<=i;j++){
            ans = ans * (i-j+1);
            ans = ans / j;
            row.push_back(ans);
        }
        result.push_back(row);
        }
        return result;
    }
};