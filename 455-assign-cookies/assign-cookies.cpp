class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(begin(g),end(g));
        sort(begin(s),end(s));
        int n=g.size()-1;
        int m=s.size()-1;
        int i=0,j=0;
        int count=0;
        while(i<=m && j<=n){
            if(s[i]>=g[j]){
               count++;
               i++;
               j++;
            } 
            else
            i++; 
        }
        return count;
    }
};