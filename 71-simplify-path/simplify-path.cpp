class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string token="";

        for(int i=0;i<=path.length();i++){
            if(i == path.length() || path[i]=='/'){

                if(token == ".."){
                    if(!st.empty())
                    st.pop();
                }

                else if(token != "." && token != ""){
                    st.push(token);

                }
                token="";
            }
            else{
                token += path[i];
            }
        }
        if(st.empty()) return "/";
        string result = "";
        while(!st.empty()){
            result = "/" + st.top() + result;
            st.pop();
        }
        return result;
    }
};