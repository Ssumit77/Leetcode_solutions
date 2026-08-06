class Solution {
public:
    int smallestNumber(int n, int t) {
       bool flag=true;
       int temp=n;
       int rem=0;
       int pd=1;
        while(flag){
             temp=n;
             pd=1;
             rem=0;
           while(temp>0){
            rem=temp%10;
            pd=pd*rem;
            temp/=10;
           }
           if(pd%t==0){
           return n;
           flag=false;
           }
           n++;
        }
        return pd;
    }
};