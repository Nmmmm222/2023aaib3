#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while(scanf("%c",&c)==1){
		c=tolower(c);
		if(c==' '||c=='\n')cout << c;
		else{
			int i=s.find(c);
			cout <<s[i-2];
		}
		
	}


}