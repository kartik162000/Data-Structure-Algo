class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int res1=INT_MIN;
        int n=colors.size();
        for(int i=0;i<colors.size();i++)
        {
            if(colors[0]!=colors[i])
                res1=max(res1,i);
            if(colors[n-1]!=colors[i])
                res1=max(res1,n-1-i);
        }
        return res1;

        }
};