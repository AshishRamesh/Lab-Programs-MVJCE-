#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int iNum, iSum = 0;
    
    cout << "Enter the value of n : " ;
    cin >> iNum;
    
    for(int i=1;i<=iNum;i++)
    {
        iSum += i;
    }
    cout << "Sum of 1 to " << iNum << " is : " << iSum << endl;
    cout << "Sum of 1 to " << iNum << " using formula is : " << iNum*(iNum+1)/2<<endl;
    return 0;
}
