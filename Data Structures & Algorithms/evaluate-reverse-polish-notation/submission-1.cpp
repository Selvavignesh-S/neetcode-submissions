class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++){
            string s = tokens[i];
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                if(s == "+"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c = a + b;
                    st.push(c);
                }
                else if(s == "-"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c = b - a;
                    st.push(c);
                }
                else if(s == "*"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c = a * b;
                    st.push(c);
                }
                else if(s == "/"){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int c = b / a;
                    st.push(c);
                }
            }
            else{
                int a = stoi(tokens[i]);
                st.push(a);
            }
        }
        return st.top();
    }
};
