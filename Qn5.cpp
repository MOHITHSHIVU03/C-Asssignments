#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void swap_using_temp(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

}
void swap_without_using_temp(int &num1, int &num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

}
int main()
{
  
    int num1, num2;
    cin >> num1 >> num2;
    cout << "num1 and num2 before swap" << endl;
    cout << num1 << " " << num2 << endl;
    swap_using_temp(num1, num2);
    cout << "num1 and num2 after swap_using_temp" << endl;
    cout << num1 << " " << num2 << endl;
    swap_without_using_temp(num1, num2);
    cout << "num1 and num2 after swap_without_using_temp" << endl;
    cout << num1 << " " << num2 << endl;
    
    
}