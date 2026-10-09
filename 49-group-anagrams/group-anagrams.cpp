class Solution {
public:
    // bool checkanagram(string s1, string s2){
    //     int n=s1.size(),m=s2.size();
    //     if(m!=n)
    //     return false;
    //     unordered_map<char,int> m1,m2;
    //     for(int i=0;i<m;i++){
    //         m1[s1[i]]++;
    //         m2[s2[i]]++;
    //     }
    //     return m1==m2;
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;
        for(auto x : strs){
            string p=x;
            sort(begin(p),end(p));
            mp[p].push_back(x);
        }
        for(auto x : mp){
            res.push_back(x.second);
        }
        return res;
    }
};