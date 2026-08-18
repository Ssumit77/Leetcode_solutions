class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int j=k-1;
        unordered_map<int,int> mp;
        if(k==n){
          sort(nums.begin(),nums.end());
          return nums[n-1];
        }
        for(int i=0;i<=n-k;i++,j++){
            for(int p=i;p<=j;p++){
                mp[nums[p]]++;
            }
        }
        int mx=-1;
        for(auto x:mp){
            if(x.second==1)
             mx = max(mx,x.first);
        }
        return mx;
    }
};