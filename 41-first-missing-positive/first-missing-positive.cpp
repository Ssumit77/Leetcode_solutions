class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_set<int>st;
        vector<int> filter;
        for(int i=0;i<n;i++){
            if(nums[i]>0) {
                st.insert(nums[i]);
            }       //&& nums[i]<(n+1)
            // filter.push_back(nums[i]);
        }
        for(auto x:st)
        filter.push_back(x);
        sort(begin(filter),end(filter));
        int m=filter.size();
        for(int i=m;i<=n;i++){
            filter.push_back(0);
        }
        for(int i=0;i<n;i++){
            if(filter[i]!=i+1)
            return i+1;
        }
        return n+1;
    }
};