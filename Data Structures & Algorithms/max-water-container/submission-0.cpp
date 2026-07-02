class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lp=0;
        int rp=heights.size()-1;
        int maximum=INT_MIN;
        int area=0;
        while(lp<rp){
            int width=rp-lp;
            int lenght=min(heights[lp],heights[rp]);
            area=width*lenght;
            maximum=max(maximum,area);
            if(heights[lp]<heights[rp]){
                lp++;
            }
            else{
                rp--;
            }

        }
        return maximum;
        
        
    }
};
