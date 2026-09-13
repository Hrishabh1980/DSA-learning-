class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty())return 0;
                char top=st.top();
                if(s[i]==')'&&top=='('||s[i]=='}'&&top=='{'||s[i]==']'&&top=='['){
                st.pop();
                
                }
                else{
                    return 0;
                }
            }

        }
        return st.empty();
    }

        


    
};