class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size();
        int N =matrix[0].size();
        int i=0,j=0,dir=0; //dir方向 0右 1下 2左 3上
        int dI[4] ={0,1,0,-1}; //左手i的增減值
        int dJ[4] ={1,0,-1,0}; //右手j的增減值

        vector<int> ans;
        ans.push_back(matrix[i][j]);
        i += dI[dir];
        j+=dJ[dir];

        ans.push_back(matrix[i][j]);
        i += dI[dir];
        j += dJ[dir];
        

        ans.push_back(matrix[i][j]);
        //這個程式不會轉方向
        return ans;
    }
};