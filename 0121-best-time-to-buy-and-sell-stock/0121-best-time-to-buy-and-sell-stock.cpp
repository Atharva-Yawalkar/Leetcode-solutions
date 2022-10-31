class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=0;
        int m = prices.size();
        int min= prices[0];
        int max=0;
        for (int i=1;i<m;i++){
            if(prices[i]<min){
                min=prices[i];
                // s=i;
                // return s;
            }
            int sum = prices[i]-min;
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
    
};