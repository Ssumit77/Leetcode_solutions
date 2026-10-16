class Solution {
public:
    int square(int value , int freq){
         int res=0;
         for(int i=1;i<=freq;i++)
          res+=value*value;
          return res;
    }
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                st.clear();
                for(int k=i;k<=j;k++){
                   st.insert(nums[k]);
                }
                mp[st.size()]++;
            }
        }
        int result=0;
        for(auto x : mp){
            int value=x.first;
            int freq=x.second;
           result+=square(value,freq);
        }
        return result;
    }
};