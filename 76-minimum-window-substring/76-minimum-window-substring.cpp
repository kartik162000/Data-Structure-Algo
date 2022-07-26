class Solution {
public:
    string minWindow(string s, string p) {
     int n = s.length();
        int start=0,end=INT_MAX;
        unordered_map<char,int> mp;
        for(auto &ele:p){
            mp[ele]++;
        }
        int count = mp.size();
        int i=0,j=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            if(count==0){
                while(count==0){
                    if(end-start>j-i){
                        start=i;
                        end=j;
                    }
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]>0){
                            count++;
                        }
                    }
                    i++;
                }
            }
            j++;
        }
        return end== INT_MAX? "":s.substr(start,end-start+1);

    }
};




// class Solution {
// public:
//     string minWindow(string s, string t) {
//         map<char,int> mp1;
//         map<char,int> mp2;
//         int len=t.size();
//         for(auto x:t)
//             mp2[x]++;
//         int i=0;
//         int temp_len=0;
//         int j=0;
//         string ans="";
//         while(i<s.size())
//         {
//             if(mp2.find(s[i])!=mp2.end() && mp1[s[i]]<=mp2[s[i]])  
//             {
//                 temp_len++;
//              mp1[s[i]]++;

//             }
//             else
//                  mp1[s[i]]++;
//             if(temp_len==t.size())
//             {
//                 while(j<=i && temp_len==t.size())
//                 {
//                     cout<<"value of i and j is:"<<i<<"j:"<<j<<"\n";
//                     if(j==i)
//                     {
//                         ans=s.substr(j)
//                     }
//                     if(ans=="" || i-j+1<ans.size())
//                         ans=s.substr(j,i+1); 
                    
//                     if(mp2.find(s[j])!=mp2.end() && mp1[s[j]]>=mp2[s[j]]) 
//                     {
//                         temp_len--;
//                         mp1[s[j]]--; 
//                     }   
//                     else
//                         mp1[s[j]]--;
//                     j++;
//                 }
//             }
//             i++;
//         }
//         return ans;
//     }
// };