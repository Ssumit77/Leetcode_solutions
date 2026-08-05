class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size()-1;
        int i=0,j=n;
        int waterl=0;
        while(i<j){
            waterl=max(waterl,((j-i)*min(nums[i],nums[j])));
            if(nums[i]<nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return waterl;
    }
};