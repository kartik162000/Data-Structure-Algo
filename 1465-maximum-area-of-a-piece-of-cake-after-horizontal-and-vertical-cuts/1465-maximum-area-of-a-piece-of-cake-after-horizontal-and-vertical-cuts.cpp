class Solution {
public:
    int maxArea(int h, int w, vector<int>& hh, vector<int>& vv) {
        hh.push_back(0);
        hh.push_back(h);
        vv.push_back(0);
        vv.push_back(w);
        sort(hh.begin(),hh.end());
        sort(vv.begin(),vv.end());
        long max_hh=INT_MIN,max_vv=INT_MIN;
        for(int i=1;i<hh.size();i++)
        {
            if(max_hh<hh[i]-hh[i-1])
                max_hh=hh[i]-hh[i-1];
        }
        
        for(int i=1;i<vv.size();i++)
       {
            if(max_vv<vv[i]-vv[i-1])
                max_vv=vv[i]-vv[i-1];
        }
        return (max_hh*max_vv)%1000000007;
    }
};