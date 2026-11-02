class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int count = 1;
        unordered_map<string,int> hashmap;
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            if(hashmap[s] == 0){
                hashmap[s] = count;
                count++;
            }
        }
        vector<vector<string>> answer(count-1);
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            answer[hashmap[s] - 1].push_back(strs[i]);
        }
        return answer;
    }
};
