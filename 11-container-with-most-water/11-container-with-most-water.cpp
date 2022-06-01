class Solution {
public:
    int maxArea(vector<int>& height) {
 
        int maxs=0;
            int l1=0,r1=height.size()-1;
        int max=0;
        while(l1<r1){
            int l=height[l1];
            int r=height[r1];
            int y=min(l,r);
            if((y*(r1-l1))>max){
                max=y*(r1-l1);
            }
            if(l<r)
                    l1++;
                else
                    r1--;
        }
        return max;
    }
};