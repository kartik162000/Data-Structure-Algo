class Solution {
    public int pivotIndex(int[] nums) {
        int[] arr = new int[nums.length];
        
        for(int i=0;i<nums.length;i++){
            arr[i] = nums[nums.length-i-1];
        }
                
        for(int i=1;i<nums.length;i++){
            arr[i] = arr[i] + arr[i-1];
            nums[i] = nums[i]+nums[i-1];
        }      
        
        for(int i=0;i<nums.length;i++){
            if(nums[i] == arr[nums.length-i-1]){
                return i;
            }
        }
        return -1;
    }
}