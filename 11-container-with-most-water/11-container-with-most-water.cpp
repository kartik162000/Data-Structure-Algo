class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxs=INT_MIN;
        while(i<j)
        {
            int ans=(j-i)*min(height[i],height[j]);
            maxs=max(ans,maxs);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxs;
    }
};