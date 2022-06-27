class Solution {
public:
    int minPartitions(string n) {
        int maxs=INT_MIN;
        int dig;
        for(int i=0;i<n.size();i++)
        {
            dig=n[i]-'0';
            maxs=max(maxs,dig);
        }
        return maxs;
    }
};