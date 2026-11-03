class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int maximum = 1;
        int size = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i+1] == nums[i] + 1){
                size++;
                if(size > maximum){
                    maximum = size;
                }
            }
            else{
                size = 1;
            }
        }
        return maximum;
    }
};
