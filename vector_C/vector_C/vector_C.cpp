#include <iostream>
#include "lib.h"
#include <cassert>
using namespace std;
my_vector <int>v;

void test(int testi)
{

    assert(v.get_s() != NULL);
   
}
int main()
{
    v.push(1);
    v.push(2);
    v.push(3);
    v[2]=20;


    cout << "Vector size : " << v.size() << endl;
    cout << "Vector capacity : "<< v.get_s() << endl;
    cout << "Vector elements : ";
    v.print();
    v.push(100, 1);

    cout << endl;
    cout << "Vector elements : ";
    v.print();
    v.pop();
    v.print();
    cout << "Vector size : "<< v.size() << endl;
    cout << "Vector capacity : "<< v.get_s() << endl;
    v.resize();
    cout << "Vector capacity2 : "<< v.get_s() << endl;
    cout << "Vector elements : ";
    v.print();
return 0;
}