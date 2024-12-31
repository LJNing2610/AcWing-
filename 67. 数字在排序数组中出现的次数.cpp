class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int sb=0;
		for(auto n:nums){
        	if(n==k)
        	sb++;
		} 
		return sb;
    }
};
