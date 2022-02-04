class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
        int sum=0;
        for(auto x:stones)
            mp[x]++;
        for(auto x:jewels)
            sum+=mp[x];
        return sum;
    }
};