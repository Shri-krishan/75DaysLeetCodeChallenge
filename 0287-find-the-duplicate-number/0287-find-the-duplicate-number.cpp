class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int j=abs(nums[i]);
            if(nums[j]>0){
                nums[j]=-nums[j];
            }else{
                return j;
            }
        }
        return -1;
    }
};