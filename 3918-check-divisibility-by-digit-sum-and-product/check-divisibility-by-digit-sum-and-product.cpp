class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int rem=0;
        int temp=n;
        while(temp!=0){
           rem=temp%10;
           sum+=rem;
           pro*=rem;
           temp/=10;
        }
        if(n % (sum+pro))
        return false;

        return true;
    }
};