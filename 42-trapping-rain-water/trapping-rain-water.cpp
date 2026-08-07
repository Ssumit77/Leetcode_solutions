class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if (n < 3)
            return 0;

        int i = 0;
        int j = n - 1;

        int leftMax = 0;
        int rightMax = 0;

        int trappedWater = 0;

        while (i < j) {

            if (height[i] <= height[j]) {

                if (height[i] >= leftMax) {
                    leftMax = height[i];
                }
                else {
                    trappedWater += leftMax - height[i];
                }

                i++;
            }
            else {

                if (height[j] >= rightMax) {
                    rightMax = height[j];
                }
                else {
                    trappedWater += rightMax - height[j];
                }

                j--;
            }
        }

        return trappedWater;
    }
};