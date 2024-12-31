class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
        	for(int j=nums.size()-1;j>i;j--){
        		if(nums[i]+nums[j]==target){
        			return{nums[i],nums[j]};
				}
			}
		}
    }
};
