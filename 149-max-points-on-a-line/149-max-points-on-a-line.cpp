class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
int result=0;
int n=p.size();
for(int i=0;i<n;i++)
{
unordered_map<double, int> map;
for(int j=i+1;j<n;j++)
{
if(p[i][0]==p[j][0]) //agar x cordinate same hoga toh slope infinity hoga
{
map[INT_MAX]++;
}
else
{
double slope = double(p[j][1] - p[i][1]) / double(p[j][0] - p[i][0]); //normal slope nikal loo
map[slope]++;
}
}
// for(auto it:map)
// {
// cout<<it.first<<" "<<it.second<<endl;
// }
int local_max=0;
for(auto it:map)
{
local_max=max(local_max,it.second);
}
result=max(result,local_max);
}
return result+1;
}
};