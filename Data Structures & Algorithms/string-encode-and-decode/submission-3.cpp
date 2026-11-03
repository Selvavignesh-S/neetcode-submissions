class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        string s = "";
        for(int i = 0; i < strs.size(); i++){
            int len = strs[i].size();
            s += to_string(len) + "#" +strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        if(s.size() == 0){
            return {};
        }
        vector<string> strings;
        int i = 0;
        while(i <= s.size()-1){
            string num = "";
            while(s[i]!= '#'){
                num+=s[i];
                i++;
            }
            i++;
            int num2 = stoi(num);
            int num3 = num2;
            string str = "";
            while(num3 >= 1){
                str += s[i];
                i++;
                num3--;
            }
            strings.push_back(str);
        }
        return strings;
    }
};
