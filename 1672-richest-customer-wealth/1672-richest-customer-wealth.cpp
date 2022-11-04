class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        int m= accounts.size();
        int n = accounts[0].size();
        vector <int> max;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                sum+=accounts[i][j];
                max.push_back(sum);
            }
            sum=0;
        }
        int maximum=*max_element (max.begin(), max.end());
        return maximum;
    }
};