class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>  freq;
        vector<int> result;
        vector<pair<int,int>> newarr;

        for(int x : nums){
            freq[x]++;
        }

       for(auto it: freq){
        newarr.push_back({it.second,it.first});
       }

       sort(newarr.rbegin(), newarr.rend());

       for(int i=0 ; i<k ; i++){

        result.push_back(newarr[i].second);
       }

        
        return result;
    }
};