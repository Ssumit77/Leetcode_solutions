class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
       vector<int> vt=nums;
       reverse(begin(vt),end(vt));
       for(int i=0;i<vt.size();i++)
        nums.push_back(vt[i]);
        return nums;
    }
};