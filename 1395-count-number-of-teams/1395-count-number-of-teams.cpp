class Solution {
public:
    int numTeams(vector<int>& rating) {
        int flag=0;
        int small_left,big_left,small_right,big_right;
        int total=0;
        for(int i=1;i<rating.size()-1;i++)
        {
            small_left=0,big_left=0,small_right=0,big_right=0;
            flag=0;
            for(int j=0;j<rating.size();j++)
            {
                if(i==j)
                { 
                    flag=1;
                    continue;
                }
                if(flag==0)
                {
                  if(rating[i]>rating[j])
                        small_left++;
                 else if(rating[i]<rating[j])
                    big_left++;
                }
            else if(flag==1)
                {
                  if(rating[i]>rating[j])
                        small_right++;
                 else if(rating[i]<rating[j])
                    big_right++;
                }  
            }   
            total=total+small_left*big_right+big_left*small_right;
        }
        return total;
    }
};