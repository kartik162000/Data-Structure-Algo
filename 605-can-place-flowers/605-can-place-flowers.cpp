class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        if(arr.size()==1 && arr[0]==0 && n==1)
            return true;
        else
            false;
        if(arr.size()<=2 && n==0)
            return true;
        else
            false;
        if(n==0)
            return true;
      for(int i=0;i<arr.size();i++)
      {
          if(i==0)
          {
              if(arr[i]==0 &&arr[i+1]==0)
              {
                  n--;
                  arr[i]=1;
              }
              else
                  continue;
          }
          else if(i==arr.size()-1 )
          {
              if(arr[i]==0 && arr[i-1]==0)
              {
                  arr[i]=1;
                  n--;
              }
              else
                  continue;
          }
          else
          {
              if(arr[i]==0 && arr[i-1]==0 && arr[i+1]==0)
              {
                  
                  arr[i]=1;
                  n--;
              }
              else
                  continue;
          }  
      }
    cout<<n;
    if(n<=0)
        return true;
    else
        return false;
    }
};