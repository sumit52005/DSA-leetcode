import java.util.Stack;

class Solution {
    public boolean isValid(String s) {
       
        Stack<Character> st =new Stack<Character>();

        for(int i=0;i<s.length();i++){
            char c =s.charAt(i);
            if(c=='('|| c=='[' || c=='{'){
                st.push(c);
            }
            else{
                if(st.isEmpty()){
                    return false;
                }
            
                char temp=st.pop();
                if((c==')' && temp!='(') || (c==']' && temp!='[')|| (c=='}' && temp!='{')){
                        return false;
    }
            }
        }

        if(!st.isEmpty()){
            return false;
        }
        return true;


    };
}

