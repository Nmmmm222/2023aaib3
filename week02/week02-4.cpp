class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256]={}; //陣列超大 都設為0
        for(char c :s){ //針對s裡面的每個字c
            H[c]++; //把Histogream統計資料H[c] 加1 多1 次
        }
        for(char c:t){ //針對右邊的字串t 裡面的每個字c
            H[c]--; //用掉剛剛累積的那個H[c]++
            if(H[c]<0) return c; //不夠用 找到兇手了
        }
        return 0;
    }
};