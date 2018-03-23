#include <iostream>

using namespace std;

template <class T>
void myswap(T& a,T&b){
    T tmp=a;
    a=b;
    b=tmp;
}
int main()
{
    cout << "Hello World!" << endl;

    int a=1;
    int b=2;
    myswap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    double i=1.19;
    double j=2.30;
    myswap<double>(i,j);
    cout<<i<<endl;
    cout<<j<<endl;
    return 0;
}
