class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        int res=0;
		for(int i=0;i<nums.size();i++){
			if(i!=nums[i]){
        		res=i;
        		break;
			}else
			res=i+1;
		}
		return res;
    }
};
