#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void divide_num_based_base_value(int num,int *res);
int main()
{
  
    int num;
    cin >> num;
    if (0 < num < 10000)
        cout << "Number should be less then 4 digit " << endl;
    int *res = (int*)malloc(sizeof(int) * 4);
    divide_num_based_base_value(num,res);
    for (int i = 4;i > 0;i--)
    {
        cout << *(res + i);
        if (i > 1)
            cout << "+";
    }
           



 
    
}
void divide_num_based_base_value(int num,int *res)
{
    int cur, sum = 0, i = 0;
    
    while (num != 0)
    {
        cur = num % 10;
        *(res+i) = cur * pow(10, i++);

        num = num / 10;
    }
   
}