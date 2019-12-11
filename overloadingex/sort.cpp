#include<iostream>
#include <string>
#include "sort.h"

using namespace std;

int* Sort::sort(int* myarr, int len) {
	int saveVal;
	for (int i = 0; i < len-1; i++) 
		for (int j = 0; j < len-i-1; j++)
			if (myarr[j] > myarr[j + 1]) {
				saveVal = myarr[j];
				myarr[j] = myarr[j + 1];
				myarr[j + 1] = saveVal;
			}
	return myarr;
}

double* Sort::sort(double* myarr, int len) {
	double saveVal;
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
			if (myarr[j] > myarr[j + 1]) {
				saveVal = myarr[j];
				myarr[j] = myarr[j + 1];
				myarr[j + 1] = saveVal;
			}
	return myarr;
}
string* Sort::sort(string* myarr, int len) {
	string saveVal;
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
			if (myarr[j].compare( myarr[j + 1])>0) {
				saveVal = myarr[j];
				myarr[j] = myarr[j + 1];
				myarr[j + 1] = saveVal;
			}
	return myarr;
}