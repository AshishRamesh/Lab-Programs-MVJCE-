//Code Prone to error , it is incomplete
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void fnSwap(int&, int&);
int main() 
{
    int iNum1, iNum2;
    cout << "Enter the value of m and n : " ;
    cin >> iNum1 >> iNum2;
    cout << "Values before Swapping m = " << iNum1 << " and n = " << iNum2 << endl;
    fnSwap(iNum1, iNum2);
    cout << "Values after Swapping m = " << iNum1 << " and n = " << iNum2 << endl;
    return 0;
}
void fnSwap(int &p, int &q)
{
    p = pˆq;
    q = pˆq;
    p = pˆq;
}
