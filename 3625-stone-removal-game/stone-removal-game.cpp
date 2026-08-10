class Solution {
public:
    bool canAliceWin(int n) {
        string player="bob";
       int num=10; 
       while(num<=n){
        if(num%2==0)
          player="alice";
        else
        player="bob";
        n-=num;
       num--;
       }
       if(player=="bob")
       return false;
    return true;
    }
};