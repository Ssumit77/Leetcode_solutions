class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int seq_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)
            seq_sum+=nums[i];
            else 
            break;
        }

        vector<bool> hashTable(1276, false);

        for(int num : nums)
            hashTable[num] = true;

        //finding the missing number using ht
        while(hashTable[seq_sum])
            seq_sum++;

        return seq_sum;
    }
};