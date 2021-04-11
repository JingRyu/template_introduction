#include <iostream>
using namespace std;

template<class T>

T myMax(T x,T y)
{
    if(x >= y){return x;}else{return y;}
}

int main()
{
    cout<<myMax<int>(3,4)<<endl;
    cout<<myMax<float>(3.2,4.2)<<endl;
    cout<<myMax<char>('a','b')<<endl;

    return 0;
}
