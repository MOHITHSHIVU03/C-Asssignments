#include <iostream>
#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>

using namespace std;

int main()
{
	for (int i = 0;i <= 255;i++)
	{
		printf(" %c Character has the ASCII value of %d\n", i, i);
		if (i % 10 == 0)
			Sleep(1000);
	}
		
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	//int num;
	//cin >> num;

	/*if (num == 0 || num == 1)
		cout << num << " is not a prime number" << endl;
	else
	{
		for (int i = 2;i <= num / 2;i++)
		{
			if (num % i == 0)
			{
				cout << num <<" is not a prime number" << endl;
				exit(0);
			}
				
		}
		cout << num << " is a prime number" << endl;
	}*/
	int isprime=1,n,count;
	for (n = 2,count=0;n < 100;n++)
	{
		   
			for (int i = 2;i <= n / 2;i++)
			{
				if (n % i == 0)
				{
					isprime = 0;
					break;
				}
				isprime = 1;
			}
			if (isprime==1)
			{
				cout << n << endl;
				count++;
				
			}		
	}

	return 0;
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int check_armstrong_num(int num)
{
	int digit,sum=0;
	while (num != 0)
	{
		digit = num % 10;
		sum += (digit * digit * digit);
		num = num / 10;
	}
	return sum;
}
int main()
{
	int a_num;
	for (int num=0;num < 1000;num++)
	{
		a_num = check_armstrong_num(num);
		if (a_num == num)
			cout << num << endl;
	}
	
	return 0;
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int num;
	cin >> num;
	for (int i = 1;i <=num ;i++)
	{
		for (int j = num;j > i;j--)
			cout << "  ";
		for (int k = i;k >=1;k--)
			cout << k << " ";
		for (int l = 1;l <=i;l++)
			cout << l << " ";
		cout << endl;
	}
		
	
	return 0;
}