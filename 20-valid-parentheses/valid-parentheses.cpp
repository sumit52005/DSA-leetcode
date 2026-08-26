class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.length();

        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }
            else{
                if(st.size()==0) return false;

                char top=st.top();
                st.pop();

                if((ch==')'&&top!='(') || (ch==']'&&top!='[') || (ch=='}'&&top!='{')){
                    return false;
                }


            }
        }

        return st.empty();
    }
};