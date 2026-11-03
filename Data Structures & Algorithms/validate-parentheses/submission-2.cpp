class Solution {
public:
    bool valid_pair(char a, char b){
        if((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']')){
            return true;
        }
        else{
            return false;
        }
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    char c = st.top();
                    if(valid_pair(c,s[i])){
                    st.pop();
                }
                else{
                    return false;
                }
                }
                else{
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};
