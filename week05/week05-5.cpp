class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //可將字串string 變成cin 的 iostream
        string word;
        while(ss >> word){ //一直讀,讀完才可以離開

        }
        return word.length();//最後殘留的那個字
    }
};