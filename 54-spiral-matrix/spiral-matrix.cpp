class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        // taking total value
        int total=n*m;
        //intializing a counter value
        int count=0;

    // creating a vector to store the final solution
        vector<int>ans;
    // marking row start and row end

        int rowStart=0;
        int rowEnd=n-1;

    // marking column start and column end

        int colStart=0;
        int colEnd=m-1;

    // now using a while loop to check the conditions until the condition becomes false

    while(count<total){
        
        // row start,(colstart to col end)

        for(int i=colStart;i<=colEnd;i++){
            ans.push_back(matrix[rowStart][i]);
            count+=1;
        }
        rowStart+=1;
        if(count==total) break;

        // colend,(rowstart to row end)

        for(int i=rowStart;i<=rowEnd;i++){ 
            ans.push_back(matrix[i][colEnd]);
            count+=1;
        }
        colEnd-=1;
        if(count==total) break;

        // row end,(colend to col start)

        for(int i=colEnd;i>=colStart;i--){
            ans.push_back(matrix[rowEnd][i]);
            count+=1;
        }
        rowEnd-=1;
        if(count==total) break;

        // col start,(rowEnd to row Start)
        for(int i=rowEnd;i>=rowStart;i--){
            ans.push_back(matrix[i][colStart]);
            count+=1;
        }
        colStart+=1; 
        if(count==total) break;
    }
    return ans;
    }
};