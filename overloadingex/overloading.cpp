#include<iostream>
#include <string>
#include "Overloading.h"

using namespace std;

class overloading {
private:
	int count;
	string strarr[10];
	int intarr[10];
	double doublearr[10];
	void sort(int* myarr) {

	}
	void sort(double* myarr) {

	}
	void sort(string* myarr) {

	}
public:
	int middle(int* myarr) {
		sort(myarr);
		if (count % 2 == 1) {
			return intarr[(count / 2)];
		}
		else {
			return (intarr[(count / 2)] + intarr[(count / 2) - 1]) / 2;
		}
	}
	double middle(double* myarr) {
		sort(myarr);
		if (count % 2 == 1) {
			return doublearr[(count / 2)];
		}
		else {
			return (doublearr[(count / 2)] + doublearr[(count / 2) - 1]) / 2;
		}
	}
	string middle(string* myarr) {

		sort(myarr);
		if (count % 2 == 1) {
			return strarr[(count / 2)];
		}
		else {
			return strarr[(count / 2)];//******TODO
		}
	}

};