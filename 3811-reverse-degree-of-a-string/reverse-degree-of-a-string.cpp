class Solution {
public:
    int reverseDegree(string s) {
        int n=123; //97 value of 'a' + 26 chararcters in alphabet
        int revDeg=0;
        for(int i=0;i<s.size();i++){
           revDeg+= (n - (int)s[i])*(i+1);
        }
        return revDeg;
    }
};