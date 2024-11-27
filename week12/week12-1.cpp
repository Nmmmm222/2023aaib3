///week12-1.cpp 學習資料結構的 struct vs. class
#include <iostream>
#include <string> ///為了cat貓的名字
using namespace std;

///struct Node{};///都有分號結尾 c語言的結構

///class Cat{}; ///之前幾週 都教過
struct Node{
    int val;///value的縮寫 這個Node裡面的值
};
class Cat{
public:
    string name;///貓的名字 之前幾週教過
};
int main()
{
    Cat cat1;
    cat1.name="attie";
    Node node;
    node.val=10;
}
