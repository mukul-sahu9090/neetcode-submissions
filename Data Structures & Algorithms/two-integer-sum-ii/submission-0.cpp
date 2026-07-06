class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> arr;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(numbers[i]+numbers[j]==target){
                    arr.push_back(i+1);
                    arr.push_back(j+1);
                    count++;
                    break;
                    
                }
            }
            if(count==1){
                break;
            }
        }
        return arr;
    }
        
    
};
