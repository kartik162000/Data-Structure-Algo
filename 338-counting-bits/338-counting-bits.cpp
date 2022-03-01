class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0)
            return {0};
        if(n==1)
            return {0,1};
        vector<int>vec(n+1);
        vec[0]=0;
        vec[1]=1;
        vec[2]=1;
        if(n==2)  return vec;
        for(int i=3;i<=n;i++)   
        {
            int x=i/2;
            if(i%2==0)
            {
                vec[i]=vec[x];
            }
            else
            {
                vec[i]=vec[x]+1;
            }
        }
      return vec;
        
    }
};