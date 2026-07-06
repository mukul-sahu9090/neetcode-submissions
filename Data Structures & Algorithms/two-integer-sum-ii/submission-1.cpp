class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> arr;
        int lp=0;
        int rp=numbers.size()-1;
        while(lp<rp){
            if(numbers[lp]+numbers[rp]==target){
                arr.push_back(lp+1);
                arr.push_back(rp+1);
                break;
            }
            if(numbers[lp]+numbers[rp]>target){
                rp--;
            }
            else{
                lp++;
            }
        }
        return arr;
    }
        
    
};
