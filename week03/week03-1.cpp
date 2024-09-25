///因為range_based for迴圈 必須在c++11 (2011之後) 才能用
///如果適用 c++98 (1998年版c++) 會無法正確編譯 執行會出錯 迴圈出不來
///codeBlocks 17.12 裡 Setting_Compiler 勾第2個 -std=c++
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(c !='2') cout << c ;
	}
	return 0;
}
