#include <iostream>

using namespace std;

int main()
{
  
    float Base_Salary, HRA, DA, Gross_Salary, Net_Salary,PF;
    cin >> Base_Salary;
    HRA = 0.2 * Base_Salary;
    DA = 0.4 * Base_Salary;
    Gross_Salary = Base_Salary + HRA + DA;
    PF = 0.1 * Gross_Salary;
    Net_Salary = Gross_Salary - PF;
    cout << "HRA = " << HRA << endl;
    cout << "DA = " << DA << endl;
    cout << "PF = " << PF << endl;
    cout << "Gross Salary = " << Gross_Salary << endl;
    cout << "Net Salary = " << Net_Salary << endl;

   
    
    
}