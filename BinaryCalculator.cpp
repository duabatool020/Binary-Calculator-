#include<iostream>
#include<conio.h>
using namespace std;
void sum(long int array[2])
{
	int i = 1, decimal1 = 0, remainder, sumOfdecimal = 0, sumOfBinary = 0;
	for (int j = 0;j < 2;j++)
	{
		while (array[j] != 0)
		{
			remainder = array[j] % 10;
			array[j] = array[j] / 10;
			decimal1 = decimal1 + (remainder * i);
			i = i * 2;
		}
		i = 1;
		sumOfdecimal = sumOfdecimal + decimal1;
		decimal1 = 0;
	}
	while (sumOfdecimal != 0)
	{
		remainder = sumOfdecimal % 2;
		sumOfdecimal = sumOfdecimal / 2;
		sumOfBinary = sumOfBinary + (remainder * i);
		i = i * 10;
	}
	cout << "Sum of 2 binary numbers are: " << sumOfBinary << endl;
}
void sub(long int array[2])
{
	int i = 1, decimal1 = 0, remainder, subOfdecimal = 0, subOfBinary = 0;
	for (int j = 0;j < 2;j++)
	{
		while (array[j] != 0)
		{
			remainder = array[j] % 10;
			array[j] = array[j] / 10;
			decimal1 = decimal1 + (remainder * i);
			i = i * 2;
		}
		i = 1;
		if (decimal1 > subOfdecimal)
		{
			subOfdecimal = decimal1 - subOfdecimal;
		}
		else if (decimal1 < subOfdecimal)
		{
			subOfdecimal = subOfdecimal - decimal1;
		}
		decimal1 = 0;
	}
	while (subOfdecimal != 0)
	{
		remainder = subOfdecimal % 2;
		subOfdecimal = subOfdecimal / 2;
		subOfBinary = subOfBinary + (remainder * i);
		i = i * 10;
	}
	cout << "Subtraction of 2 binary numbers are: " << subOfBinary << endl;
}
void multi(long int array[2])
{
	int i = 1, decimal1 = 0, remainder, multiOfdecimal = 1, multiOfBinary = 0;
	for (int j = 0;j < 2;j++)
	{
		while (array[j] != 0)
		{
			remainder = array[j] % 10;
			array[j] = array[j] / 10;
			decimal1 = decimal1 + (remainder * i);
			i = i * 2;
		}
		i = 1;
		multiOfdecimal = multiOfdecimal * decimal1;
		decimal1 = 0;
	}
	while (multiOfdecimal != 0)
	{
		remainder = multiOfdecimal % 2;
		multiOfdecimal = multiOfdecimal / 2;
		multiOfBinary = multiOfBinary + (remainder * i);
		i = i * 10;
	}
	cout << "multiplicaton of 2 binary numbers are: " << multiOfBinary << endl;
}
void divi(long int array[2])
{
	int i = 1, decimal1 = 0, divOfdecimal = 1, remainder, divOfBinary = 0;
	for (int j = 0;j < 2;j++)
	{
		while (array[j] != 0)
		{
			remainder = array[j] % 10;
			array[j] = array[j] / 10;
			decimal1 = decimal1 + (remainder * i);
			i = i * 2;
		}
		i = 1;
		if (decimal1 > divOfdecimal)
		{
			divOfdecimal = decimal1 / divOfdecimal;
		}
		else if (decimal1 < divOfdecimal)
		{
			divOfdecimal = divOfdecimal / decimal1;
		}
		decimal1 = 0;
	}
	while (divOfdecimal != 0)
	{
		remainder = divOfdecimal % 2;
		divOfdecimal = divOfdecimal / 2;
		divOfBinary = divOfBinary + (remainder * i);
		i = i * 10;
	}
	cout << "division of 2 binary numbers are: " << divOfBinary << endl;
}
void compliment1(int array[], int size)
{
	cout << "1's compliment of your binary numbr is: " << endl;
	for (int j = 0;j < size;j++)
	{
		if (array[j] == 1)
		{
			array[j] = 0;
		}
		else if (array[j] == 0)
		{
			array[j] = 1;
		}
		cout << array[j];
	}
	
}
void compliment2(int array[], int size)
{
	int i = 1, remainder, decimal1 = 0, compliment2;
	for (int j = 0;j < size;j++)
	{
		if (array[j] == 1)
		{
			array[j] = 0;
		}
		else if (array[j] == 0)
		{
			array[j] = 1;
		}
	}
	for (int j = 0;j < size;j++)
	{
		while (array[j]!= 0)
		{
			remainder = array[j] % 10;
			array[j] = array[j] / 10;
			decimal1 = decimal1 + (remainder * i);
			i = i * 2;
		}
	}
	compliment2 = decimal1 + 1;
	decimal1 = 0;
	i = 1;
	while (compliment2 != 0)
	{
		remainder = compliment2 % 2;
		compliment2 = compliment2 / 2;
		decimal1 = decimal1 + (remainder * i);
		i = i * 10;
	}
	cout << "2's compliment of a number is: " << decimal1 << endl;
	
}
void AND(int num1, int num2)
{
	cout << "output of And gate is: " << endl;
	cout << num1 * num2;
}
void OR(int num1, int num2)
{
	cout << "output of OR gate is: " << endl;
	cout << num1 + num2;
}
void NOT(int num1)
{
	cout << "output of NOt gate is: " << endl;
	if (num1 == 1)
	{
		cout << "0";
	}
	else if (num1 == 0)
	{
		cout << "1";
	}
}

int main()
{
	long int array[2], op;
	cout << "Enter 0 for binary subtraction" << endl;
	cout << "Enter 1 for binary addition" << endl;
	cout << "Enter 2 for binary multiplication" << endl;
	cout << "Enter 3 for binary division" << endl;
	cout << "Enter 4 for 1's compliment of a number: " << endl;
	cout << "enter 5 for 2's compliment of a number" << endl;
	cout << "Enter 6 for AND gate" << endl;
	cout << "Enter 7 for OR gate" << endl;
	cout << "Enter 8 for NOT gate" << endl;
	cin >> op;
	if (op == 0 || op == 1 || op == 2 || op == 3)
	{
		for (int i = 0;i < 2;i++)
		{
			cout << "Enter binary number: " << endl;
			cin >> array[i];
		}
	}
	if (op == 1)
	{
		sum(array);
	}
	else if (op == 0)
	{
		sub(array);
	}
	else if (op == 2)
	{
		multi(array);
	}
	else if (op == 3)
	{
		divi(array);
	}
	else if (op == 4)
	{ 
		int size;
		cout << "Ener the number of integers in your binary number: " << endl;
		cin >> size;
		int array1[30];
	   cout << "Ener the binary number: " << endl;
		for (int i = 0;i < size;i++)
		{
			cin >> array1[i];
		}
		compliment1(array1,size);
	}
	else if (op == 5)
	{
		int size;
		cout << "Ener the number of integers in your binary number: " << endl;
		cin >> size;
		int array1[30];
		cout << "Ener the binary number: " << endl;
		for (int i = 0;i < size;i++)
		{
			cin >> array1[i];
		}
		compliment2(array1, size);
	}
	else if (op == 6)
	{
		int num1, num2;
		cout << "Enter 1st input 0 or 1 " << endl;
		cin >> num1;
		cout << "Enter 2nd output 0 or 1" << endl;
		cin >> num2;
		AND(num1, num2);
	}
	else if (op == 7)
	{
		int num1, num2;
		cout << "Enter 1st input 0 or 1 " << endl;
		cin >> num1;
		cout << "Enter 2nd output 0 or 1" << endl;
		cin >> num2;
		OR(num1, num2);
	}
	else if (op == 8)
	{
		int num1;
		cout << "Enter input as 0 or 1 " << endl;
		cin >> num1;
		NOT(num1);
	}
	else
	{
		cout << "Invalid Operation" << endl;
	}
	return 0;
}
