#include<iostream>
#include <string>
#include "Overloading.h"

using namespace std;

void overloading::sort(int* myarr) {

	}
void overloading::sort(double* myarr) {

	}
void overloading::sort(string* myarr) {

	}
int overloading::middle(int* myarr) {
		sort(myarr);
		if (count % 2 == 1) {
			return intarr[(count / 2)];
		}
		else {
			return (intarr[(count / 2)] + intarr[(count / 2) - 1]) / 2;
		}
	}
double overloading::middle(double* myarr) {
		sort(myarr);
		if (count % 2 == 1) {
			return doublearr[(count / 2)];
		}
		else {
			return (doublearr[(count / 2)] + doublearr[(count / 2) - 1]) / 2;
		}
	}
string overloading::middle(string* myarr) {

		sort(myarr);
		if (count % 2 == 1) {
			return strarr[(count / 2)];
		}
		else {
			return strarr[(count / 2)];//******TODO
		}
	}

