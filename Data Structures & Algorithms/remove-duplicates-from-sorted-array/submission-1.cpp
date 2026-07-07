class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        vector<int> arr;
        arr.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                count++;
                arr.push_back(nums[i]);
            }
        }
        for(int i=0;i<arr.size();i++){
            nums[i]=arr[i];
        }
        return count;
    }
};