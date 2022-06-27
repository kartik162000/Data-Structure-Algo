class Solution {
public:
    void merge(vector<int> &nums,int l,int mid,int r)
    {
        int a=mid-l+1;
        int b=r-mid;
        vector<int> n1(a),n2(b);
        for(int i=0;i<a;i++)
        {
            n1[i]=nums[l+i];
        }
        for(int i=0;i<b;i++)
        {
            n2[i]=nums[mid+1+i];
        }
        int i=0;
        int j=0;
        int k=l;
        while(i<a && j<b)
        {
            if(n1[i]<=n2[j])
            {
                nums[k]=n1[i];
                k++;
                i++;
            }
            else
            {
                nums[k]=n2[j];
                k++;
                j++;
            }
        }
        while(i<a)
        {
            nums[k]=n1[i];
            k++;
            i++;
        }
        while(j<b)
        {
            nums[k]=n2[j];
            k++;
            j++;
        }
    }
    void mergeSort(vector<int>&nums,int l,int r)
    {
        if(l<r)
        {
             int mid=(l+r)/2;
            mergeSort(nums,l,mid);
            mergeSort(nums,mid+1,r);
            merge(nums,l,mid,r);
            
        }
       
    }
    vector<int> sortArray(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        mergeSort(nums,l,r);
        return nums;
    }
};