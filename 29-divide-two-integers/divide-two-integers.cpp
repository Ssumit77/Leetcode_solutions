class Solution {
public:
    int divide(long long dividend, long long divisor){
         long long a=abs(dividend);
         long long b=abs(divisor);
        if(a<b)
        return 0;
        long long quotient=1;
        int sign=-1;
        if((dividend>0 && divisor>0) || (dividend <0 && divisor<0))
           sign=1;
        long long temp=b;
        if(b==1 && a>b){
            if(dividend<=INT_MIN)
            {
                if(sign>0)
                return INT_MAX;
                else
                return INT_MIN;
            }
            
            if(sign<0)
                a=0-a;
            return a;
        }
        while(temp<a){
            temp+=b;
            if(temp>a)
            break;
            quotient++;   
        }
        if(sign<0)
        quotient = ~ quotient+1;
        return quotient;
    }
};