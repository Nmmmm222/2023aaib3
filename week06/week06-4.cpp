class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;
        for(string s :operations){
            int N=a.size(); ///有這麼多個數
            if(s=="+") a.push_back(a[N-1]+a[N-2]);
            else if(s=="D") a.push_back(a[N-1]*2);
            else if(s=="C") a.pop_back(); ///吐掉
            else a.push_back(stoi(s)); ///數字加入
        }
        int ans=0; ///把裡面全部加起來
        for(int b : a) ans+=b;
        return ans;
    }
};