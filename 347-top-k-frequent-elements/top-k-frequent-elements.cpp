class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        typedef pair<int,int> p;
        int n=nums.size();
        for(auto x:nums)
        mp[x]++;
        //defining min_heap
        priority_queue<p,vector<p>,greater<p>> pq; //min heap
         for(auto &it: mp){
            int value=it.first;
            int freq=it.second;
            pq.push({freq,value});
            if(pq.size()>k)
             pq.pop();
    }
    //O(nlog(k))
    //.4 make result 
    vector<int> result;
    while(!pq.empty()){
        result.push_back(pq.top().second);
        pq.pop();
    }
    return result;
         }

};