///�]��range_based for�j�� �����bc++11 (2011����) �~���
///�p�G�A�� c++98 (1998�~��c++) �|�L�k���T�sĶ ����|�X�� �j��X����
///codeBlocks 17.12 �� Setting_Compiler �Ĳ�2�� -std=c++
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
