class Solution {
public:
    int binarySearch(vector<int>& nums,int s,int l,int target){
        if(s>l) return -1;
        int mid=(s+l)/2;
        if(nums[mid]==target) return mid;
        if(target<nums[mid])
            return binarySearch(nums,s,mid-1,target);
        return binarySearch(nums,mid+1,l,target);
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);
    }
};