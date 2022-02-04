class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp1,mp2;
        int sum=0;
        for(auto x:s)
            mp1[x]++;
        for(auto x:t)
            mp2[x]++;
        
        for(auto x:mp1)    
        {
            if(mp2.find(x.first)==mp2.end())
                sum+=(x.second);
            else
            {
                if(x.second>mp2[x.first])
                {
                    cout<<"hi";
                  sum=sum+(x.second-mp2[x.first]);

                }
            }
        }
        return sum;
    }
};