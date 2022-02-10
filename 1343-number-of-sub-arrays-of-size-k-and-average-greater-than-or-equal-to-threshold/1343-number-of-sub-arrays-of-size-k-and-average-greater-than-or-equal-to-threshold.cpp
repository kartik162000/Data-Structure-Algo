class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int count=0;
        vector<int> prefix(arr.size(),0);
        prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            prefix[i]=prefix[i-1]+arr[i];
        }
        if(prefix[k-1]/k>=t)
            count++;
        for(int i=k;i<prefix.size();i++)
        {
            int x=prefix[i]-prefix[i-k];
            if(x/k >=t)
                count++;
        }
        return count;
    }
};