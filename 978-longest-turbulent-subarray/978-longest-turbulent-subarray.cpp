class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
            int mx = 0, tmp = 0, n = arr.size();
        for(int i = 0; i < n; i++)
        {
            mx = max(mx, tmp + 1);
            
            if(i == n - 1)
                break;
            
            if(i % 2)
            {
                if(arr[i] > arr[i + 1])
                    tmp++;
                else
                    tmp = 0;
            }
            else
            {
                if(arr[i] < arr[i + 1])
                    tmp++;
                else
                    tmp = 0;
            }
        }
        
        tmp = 0;
        for(int i = 0; i < n; i++)
        {
            mx = max(mx, tmp + 1);
            
            if(i == n - 1)
                break;
            
            if(i % 2)
            {
                if(arr[i] < arr[i + 1])
                    tmp++;
                else
                    tmp = 0;
            }
            else
            {
                if(arr[i] > arr[i + 1])
                    tmp++;
                else
                    tmp = 0;
            }
        }
        
        return mx;
    }
};