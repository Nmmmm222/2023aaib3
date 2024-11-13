#include <iostream>
#include <stdio.h>
using namespace std;

class Cat{
public: ///記得要加 public 才能被外面看到
    string name;
    Cat(string _name){ ///物件建構子 constructor (左邊沒有void)
        name=_name;
    }///沒有return值
    void print(){
        cout << "My name is "<<name<<".\n";
    }
};

int main()
{
///建出 cat1和cat2時,會用建構子,把物件建構出來
    Cat cat1("小白"),cat2("小花");
    cat1.print();
    cat2.print();
}
