class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0,cow=0;
        map<int,int>mp1;
         map<int,int>mp2;
        for(int i=0;i<guess.size();i++)
        {
            if(guess[i]==secret[i])
                bull++;
            else
            {
                mp1[guess[i]]++;
                mp2[secret[i]]++;
            }
        }
        for(auto x:mp1)
            cow+=min(mp2[x.first],x.second);
       string ans=to_string(bull)+"A"+to_string(cow)+"B";
            return ans;
    }
};