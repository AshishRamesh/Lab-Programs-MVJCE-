#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<int> values;
    int iNum, iElem;
    
    cout << "Enter the number of elements : " ;
    cin >> iNum;
    cout << "Enter " << iNum << " values :";
    for(int i=0;i<iNum;i++)
    {
        cin >> iElem;
        values.push_back(iElem);
    }
    for(int i=0;i<iNum;i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;
    cout << "Sorting in ascending order" << endl;
    
    for(int i=0;i<iNum;i++)
    {
        for(int j=0;j<iNum;j++)
        {
            if(values[i] < values[j])
            {
                int temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }
    
    for(int i=0;i<iNum;i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;
    cout << "Sorting in descending order" << endl;
    for(int i=0;i<iNum;i++)
    {
        for(int j=0;j<iNum;j++)
        {
            if(values[i] > values[j])
            {
                int temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }
    
    for(int i=0;i<iNum;i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;
    return 0;
}
