// n1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <math.h>
#include <iostream>
#include <string>
#include<string.h>
#include<cstdio>

using namespace std;


int main()
{
	int tybe;
	int A[10];
	double B[10];
	string C[10];
	printf("Enter the tybe you working at : \n");
	printf("1.int\n2.double\n3.string\n");

	scanf_s("%d", &tybe);

	if (tybe == 1)
	{
		int num, count = 0;
		char next = 'y';


		do {
			printf_s("Enter a Number : ");
			scanf_s("%d", &num);
			A[count] = num;
			count++;
			printf("if you want to complete Enter y :");
			cin >> next;
			printf("\n");

		} while (next == 'y' && count <= 10);

		int cho = 1;
		while (cho != 7) {
			cout << "Enter the number of the function" << endl;
			cout << "1.count\n2.sum\n3.median\n4.STD\n5.max\n6.min" << endl;
			cin >> cho;
			if (cho == '1')
			{

			}
			else if (cho == 2)
			{

			}
			else if (cho == 3)
			{

			}
			else if (cho == 4)
			{

			}
			else
			{
				continue;
			}

		}
	}



	if (tybe == 2)
	{
		double num;
		int count = 0;
		char next = 'y';


		do {
			printf_s("Enter a Number : ");
			cin >> num;
			B[count] = num;
			count++;
			printf("if you want to complete Enter y :");
			cin >> next;
			printf("\n");

		} while (next == 'y' && count <= 10);

		int cho = 1;
		while (cho != 7) {
			cout << "Enter the number of the function" << endl;
			cout << "1.count\n2.sum\n3.median\n4.STD\n5.max\n6.min" << endl;
			cin >> cho;
			if (cho == '1')
			{

			}
			else if (cho == 2)
			{

			}
			else if (cho == 3)
			{

			}
			else if (cho == 4)
			{

			}
			else
			{
				continue;
			}

		}
	}

	if (tybe == 3)
	{
		string str;
		int count = 0;
		char next = 'y';


		do {
			printf_s("Enter a String : ");
			cin >> str;
			C[count] = str;
			count++;
			printf("if you want to complete Enter y :");
			cin >> next;
			printf("\n");

		} while (next == 'y' && count <= 10);

		int cho = 1;
		while (cho != 7) {
			cout << "Enter the number of the function" << endl;
			cout << "1.count\n2.sum\n3.median\n4.STD\n5.max\n6.min" << endl;
			cin >> cho;
			if (cho == '1')
			{

			}
			else if (cho == 2)
			{

			}
			else if (cho == 3)
			{

			}
			else if (cho == 4)
			{

			}
			else
			{
				continue;
			}

		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

