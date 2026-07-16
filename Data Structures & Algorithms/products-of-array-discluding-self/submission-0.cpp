class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int m=0;
        int count=0;
        int n=nums.size();
        vector<int> arr(n,0);
        for(int i=0; i<nums.size();i++){
            if(nums[i]!=0){
                product*=nums[i];
            }
            if(nums[i]==0){
                count++;
                m=i;
            }
            
        }
        if(count>=2){
            return arr;
        }
        if(count==1){
            arr[m]=product;
            return arr;
        }
        for(int i=0;i<nums.size();i++){
            int result=product/nums[i];
            arr[i]=result;
        }
        return arr;
    }
};
