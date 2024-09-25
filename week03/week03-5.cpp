class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        ///這題我沒甚麼頭緒 所以看了Solutions 裡別人的答案
        ///很多人使用 s+s 在減掉頭尾
        ///然後把s拿去比對 如果有出現 表示是repeated 的 patern
        string s2 =s+s;
        int N =s2.length();
        return s2.substr(1,N-2).find(s) != string::npos ;///nops對應 沒有這個位置 很大很大
        ///substr()切字串 左1 右扣1 (本來是0...N-1 現在變成1....N-2)
    }
};