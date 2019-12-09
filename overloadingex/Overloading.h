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
	string* middle(string** myarr, int count);
	int min(int* myarr,int count);
	double min(double* myarr, int count);
	string* min(string** myarr, int count);
	int max(int* myarr, int count);
	double max(double* myarr, int count);
	string* max(string** myarr, int count);
	int sum(int* myarr, int count);
	double sum(double* myarr, int count);
	int stdev(int* myarr, int count);
	double stdev(double* myarr, int count);
	void stdev(string* myarr, int count);

};