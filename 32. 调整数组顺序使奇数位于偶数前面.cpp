class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> sb;
        for(auto dasb:array){
        	if(dasb%2!=0)
        	sb.push_back(dasb);
		}
		for(auto dasb:array){
        	if(dasb%2==0)
        	sb.push_back(dasb);
		}
		array=sb;
    }
};
