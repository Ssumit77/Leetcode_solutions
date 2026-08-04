class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        sort(begin(nums),end(nums));
        int n=nums.size();
        n--;
        int min=nums[0],mx=nums[n];
        int k=0;
        for(int i=min;i<=mx,k<=n;i++){
            if(nums[k]!=i)
            res.push_back(i);
            else
            k++;
        }
return res;
    }
};