class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
        {
            return v1[1] < v2[1];
        }
    
    int findMinArrowShots(vector<vector<int>>& vect) {
            sort(vect.begin(), vect.end(),sortcol);
            int max_upto=vect[0][1];
        int count=1;
        for(int i=0;i<vect.size();i++)
        {
            if(vect[i][0]<=max_upto)
            {
                continue;
            }
            else
            {
                max_upto=vect[i][1];
                count++;
            }
            
        }
        return count;
    }
};