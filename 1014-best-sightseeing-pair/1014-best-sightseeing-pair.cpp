class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int ans=INT_MIN;
        int a=values[0];   //for storing the variable values[0]+0;
        for(int i=1;i<n;i++)             
        {
            ans=max(ans,a+values[i]-i);  // to store the max(ans or a+values[i]-i)   since i<j
            a=max(a,values[i]+i);   // to update the a
        }
        return ans;
    }
};