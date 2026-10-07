class Solution {
public:
    bool anagram(string s1, string s2){
        if(s1.size()!=s2.size())
        return false;
        unordered_map<char,int> mp1,mp2;
        for(int i=0;i<s1.size();i++)
          mp1[s1[i]]++;
           for(int i=0;i<s2.size();i++)
          mp2[s2[i]]++;

           return mp1==mp2;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        int n=words.size();
        map<int,bool> index;
        for (int i = 0; i < n; ++i) {
         index[i] = false;
        }
        for(int i=1;i<n;i++){
           if(anagram(words[i-1],words[i])){
             index[i]=true;
           }
        }
        for(int i=0;i<n;i++){
            if(index[i]==false){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};