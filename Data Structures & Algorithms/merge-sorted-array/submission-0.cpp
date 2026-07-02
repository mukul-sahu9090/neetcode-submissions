class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int idx=m;
    for(int i=0;i<n;i++){
        nums1[idx]=nums2[i];
        idx++;
    }
    int N =nums1.size();
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            if(nums1[j]>nums1[j+1]){
                swap(nums1[j],nums1[j+1]);
            }
        }
    }
        
    }
};