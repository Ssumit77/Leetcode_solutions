class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int Esum=0;
        int dsum=0;
        int temp;
        for(int i=0;i<nums.size();i++){
            Esum+=nums[i];
            temp=nums[i];
            while(temp>0){
                dsum+=temp%10;
                temp/=10;
            }
        }
        return abs(Esum-dsum);
    }
};