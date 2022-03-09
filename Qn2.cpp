#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
  
    int num[5];
    int sum = 0;
    for (int i = 0;i < 5;i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    cout << sum / 5.0 << endl; //implicit
    cout << sum / float(5) << endl;


 
    
}