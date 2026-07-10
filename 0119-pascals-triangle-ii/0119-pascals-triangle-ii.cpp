class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long ans = 1;
        int n = rowIndex;
        row.push_back(1);
        for(int i=1; i<=n; i++){
            ans = ans * (n-i+1);
            ans = ans / i;
            row.push_back(ans);
        }
    return row;
    }
};