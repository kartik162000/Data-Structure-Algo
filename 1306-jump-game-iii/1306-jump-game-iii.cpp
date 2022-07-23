class Solution {
public:
    bool help(vector<int> &arr, int index,vector<bool> &vis)
    {
        if(index<0 || index>=arr.size())
        {
            return false;
        }
        if(vis[index]==1)
            return false;
        vis[index]=1;
        if(arr[index]==0)
            return true;
        int x=index+arr[index];
        int y=index-arr[index];
        return help(arr,x,vis)|| help(arr,y,vis);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool>vis(arr.size(),0);
           return help(arr,start,vis);
    }
};