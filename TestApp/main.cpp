#include<iostream>
#include<cassert>
using namespace std;

long double fact(int N)
{
    if (N < 0)
        return 0;
    if (N == 0) 
        return 1;
    else
        return N * fact(N - 1); 
}
void TestFact()
{
    assert(fact(-5) == 0);
    assert(fact(-1) == 0);
    assert(fact(0) == 1);
    assert(fact(1) == 1);
    assert(fact(3) == 6);
    assert(fact(8) == 40320);
    assert(fact(10) == 3628800);
    cout << "TestFact OK" << endl;
}

int main()
{
    TestFact();
    int N;
    setlocale(0, "RUS");
    cout << "Введите число для вычисления факториала: ";
    cin >> N;
    cout << "Факториал для числа " << N << " = " << fact(N) << endl << endl;
}