#include <iostream>
#include <stdio.h>
using namespace std;

class Cat{
public: ///�O�o�n�[ public �~��Q�~���ݨ�
    string name;
    Cat(string _name){ ///����غc�l constructor (����S��void)
        name=_name;
    }///�S��return��
    void print(){
        cout << "My name is "<<name<<".\n";
    }
};

int main()
{
///�إX cat1�Mcat2��,�|�Ϋغc�l,�⪫��غc�X��
    Cat cat1("�p��"),cat2("�p��");
    cat1.print();
    cat2.print();
}