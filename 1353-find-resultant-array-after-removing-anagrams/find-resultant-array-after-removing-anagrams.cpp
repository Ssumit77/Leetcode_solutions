class Solution {
public:
    bool anagram(string s1, string s2){
        sort(begin(s1),end(s1));
        sort(begin(s2),end(s2));
        return s1==s2;
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