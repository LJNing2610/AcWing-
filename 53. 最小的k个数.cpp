class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        sort(input.begin(),input.end());
        return vector(input.begin(),input.begin()+k);
    }
};
