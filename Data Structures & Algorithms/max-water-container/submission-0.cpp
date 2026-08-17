class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0;

        int l=0;
        int r=heights.size()-1;
        while(l<r){
            int h=min(heights[l],heights[r]);
            int w=r-l;
            int area = h*w;
            maxi = max(maxi,area);
            if(heights[l]<=heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxi;
    }
};
