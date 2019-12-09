#include<iostream>
#include <string>
#include<string.h>
#include<cstdio>
using namespace std;


class overloading {
public:
	void sort(int* myarr,int count);
	void sort(double* myarr, int count);
	void sort(string* myarr, int count);
	int middle(int* myarr, int count);
	double middle(double* myarr, int count);
	string* middle(string* myarr, int count);
	/*int min(int* myarr);
	double min(double* myarr);
	string min(string* myarr);*/
	/*int min(int* myarr);
	double min(double* myarr);
	string min(string* myarr);*/


};