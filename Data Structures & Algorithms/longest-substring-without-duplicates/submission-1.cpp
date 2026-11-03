class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int maximum = 0;
        unordered_map<char,int> hashmap;
        while(j < s.size()){
            hashmap[s[j]]++;
            if(hashmap[s[j]] > 1){
                int size = j - i;
                if(size > maximum){
                    maximum = size; 
                }
                while(!(hashmap[s[i]] == 2)){
                    hashmap[s[i]]--;
                    i++;
                }
                hashmap[s[i]]--;
                i++;
            }
            j++;
        }
        int size = j - i;
        if(size > maximum){
            maximum = size;
        } 
        return maximum;    
    }

};
