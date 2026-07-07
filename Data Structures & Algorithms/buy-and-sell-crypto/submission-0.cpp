class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maximum=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(prices[i]<prices[j]){
                    int profit=prices[j]-prices[i];
                    maximum=max(maximum,profit);
                    count++;
                }
            }
        }
        if(count>0){
            return maximum;
        }
        return 0;
        
    }
};
