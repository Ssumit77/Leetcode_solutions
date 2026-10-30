class Solution {
public:
    int minPartitions(string n) {
        int mx=-1;
        for(auto i:n){
            int temp=i-'0';
            mx=max(temp,mx);
        }
        return mx;
    }
};