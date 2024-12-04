///week13-3.cpp
///右下角 有stdin 可輸入資料\
//LeetCode 把 #include <iostream> 和 using namespace std;都寫好了
int main() {
    int a,b;
    vector<int>A,B;
    while(cin >>a>>b){
        A.push_back(a); //把 數字a 放入 陣列A
        B.push_back(b); //把 數字b 放入 陣列B
    }//目標 把從小到大排好 把B從小到大排好
    sort( A.begin(),A.end() );
    sort( B.begin(),B.end() );
    int ans=0;
    for(int i=0;i<A.size();i++){
        //cout<<A[i]<<" ";//印出來 真的是小到大排好
        ans+=abs(A[i]-B[i]);
    }
    cout<<"加起來答案是"<<ans;
}
