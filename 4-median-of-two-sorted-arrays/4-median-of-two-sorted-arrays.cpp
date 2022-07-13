class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { 
        int n=nums1.size();
        int m=nums2.size();
     vector<int>arr(n+m);
        int k=0;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(nums1[i]<=nums2[j])
            {
                arr[k++]=nums1[i];
                i++;
            }
            else
            {
                arr[k++]=nums2[j];
                j++;
            }  
        }
        if(i!=n)
        {
            while(i<n)
            {
                arr[k++]=nums1[i++];
            }
        }
        if(j!=m)
        {
            while(j<m)
            {
                arr[k++]=nums2[j++];
            }
        }
        
        if(arr.size()%2!=0)
            return (arr[arr.size()/2]);
        else
        {
            int x=arr[arr.size()/2];
            int y=arr[(arr.size()/2)-1];
            cout<<x<<" "<<y; 
            return (double)(x+y)/2.0;
        }
    }
};