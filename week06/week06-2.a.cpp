#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>a;

    int now;
    while(cin >> now){
        a.push_back(now);
        cout<< now<<"\n"; ///先這樣寫
        ///你在小黑裡面輸入時 結束全部輸入 Ctrl-Z 加 Enter

    }
}

