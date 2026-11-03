class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> hashmap;
        vector<int> arr(2001);
        for(int i = 0; i < nums.size(); i++){
            hashmap[nums[i]]++;
            arr[1000 + nums[i]]++;
        }
        sort(arr.begin(),arr.end());
        int j = arr.size()-1;
        unordered_set<int> set;
        for(int i = 0; i < k; i++){
            set.insert(arr[j]);
            j--;
        }
        for(auto m : hashmap){
            if(set.find(m.second)!=set.end()){
                ans.push_back(m.first);
            }
        }
        return ans;

    }
};
