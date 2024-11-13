#include <iostream>
#include <stdio.h>
using namespace std;

class Cat{ ///類別
public:
    string name; ///資料、屬性
    void print(){ ///函式、方法
        cout << "I am a cat.My name is" << name <<".\n";
    }
};

int main()
{
    Cat cat1,cat2;
    cat1.name="小花";
    cat1.print();
    cat2.name="小白";
    cat2.print();
}
