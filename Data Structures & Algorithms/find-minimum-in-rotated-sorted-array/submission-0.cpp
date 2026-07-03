class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int minimum=INT_MAX;
        for(int i=0;i<n;i++){
            minimum=min(minimum,nums[i]);
        }
        return minimum;
        
    }
};
