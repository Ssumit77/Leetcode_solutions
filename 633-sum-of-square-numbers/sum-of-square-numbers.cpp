class Solution {
public:
    bool judgeSquareSum(int c) {
        int n=sqrt(c);
        vector<int> vt(n+1);
        iota(begin(vt),end(vt),0);
        int s=vt.size()-1;
        int i=0,j=s;
        long long sum=0;
        while(i<=j){
            sum=0;
         sum=1LL*vt[i]*vt[i]+1LL*vt[j]*vt[j];
         if(sum==c)
         return true;
         else if(sum<c)
         i++;
         else if(sum>c)
         j--;
        }
        return false;
    }
};