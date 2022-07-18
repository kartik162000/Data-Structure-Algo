class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
          int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(min>piles[i])
                min=piles[i];
            if(max<piles[i])
                max=piles[i];
        }
        int low=1;
        int high=max;
        int mid;
        while(low<high){
            mid=low+high;
            mid=mid/2;
            int ans=0;
            for(int i=0;i<piles.size();i++){
                if(piles[i]%mid!=0){
                    ans++;
                }
                ans=ans+piles[i]/mid;
            }
            if(ans>h)
                low=mid+1;
            else
                high=mid;
            
        }
        return low;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // if(piles.size()==1)
        //     return ceil((double)piles[0]/h);
        // if(h==piles.size())
        //     return *max_element(piles.begin(),piles.end()); 
        // int low=*min_element(piles.begin(),piles.end());
        // int high=*max_element(piles.begin(),piles.end());
        // int mins_speed=INT_MAX;
        // while(low<=high)
        // {
        //     int mid=(low+(high-low))/2;
        //     int ans=0;
        //     for(auto x:piles)
        //     {
        //         // float y=(x/mid);
        //         ans+=ceil((double)x/mid);
        //         cout<<ceil((double)x/mid)<<" ";
        //     }
        // if(ans<=h)
        // {
        //     mins_speed=min(mins_speed,mid);
        //     high=mid-1;
        // }
        //     else
        //         low=mid+1;
        // }
        // return low;

    }
};