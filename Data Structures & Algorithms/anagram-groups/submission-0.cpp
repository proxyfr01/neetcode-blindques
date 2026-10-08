class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> freq;

        for(string word : strs){
            string key= word;

            sort(key.begin(),key.end());

            freq[key].push_back(word);

        }

        vector<vector<string>> result;

        for(auto x : freq){

            result.push_back(x.second);



        }
        
        return result;
    }
};
