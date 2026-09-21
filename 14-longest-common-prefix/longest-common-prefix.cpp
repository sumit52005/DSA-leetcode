class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
        string prefix="";
        int n=strs.size();
        for(int i=0;i<strs[0].size();i++){
            char current=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=current){
                    return prefix;
                }
            }
            prefix+=current;
        }
        return prefix;

    }
};