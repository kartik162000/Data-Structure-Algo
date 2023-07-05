class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end());
      vector<vector<int>>vec;
      vector<int>v=intervals[0];
      int i=0;
      vec.push_back(v);
      for(int j=1;j<intervals.size();j++)
      {
          if(vec[i][1]>=intervals[j][0])
           vec[i][1]=max(vec[i][1],intervals[j][1]);
            else
            {
                vec.push_back(intervals[j]);
                i++;
            }
      }
      return vec;
    }
};