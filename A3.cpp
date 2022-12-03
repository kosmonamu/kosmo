#include <iostream>

using namespace std;
// 함수 안에서 함수를 정의할 수 없음.
// *** Rename (Symbol) *** 
int multyplyTwoNubers(int num_a, int num_b)
{
    int sum = num_a + num_b;
 
    return sum;
}

void printHelloWorld()
{
    cout << "Hello World " << endl;

    return;

    //
    cout << "Hello World 2" << endl;
}
s
 
int main()
{
    cout << multyplyTwoNubers(1, 2) << endl;
    cout << multyplyTwoNubers(3, 4) << endl;
    cout << multyplyTwoNubers(8, 13) << endl;
 
    cout << 1 + 2 << endl;
    cout << 3 + 4 << endl;
    cout << 8 + 13 << endl;

    pr  intHelloWorld();

    return 0;
}

