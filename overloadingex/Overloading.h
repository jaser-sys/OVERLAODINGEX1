#include<iostream>
#include <string>

using namespace std;

class overloading {
private:
	int count;
	string strarr[10];
	int intarr[10];
	double doublearr[10];
	void sort(int* myarr);
	void sort(double* myarr);
	void sort(string* myarr);
public:
	int middle(int* myarr);
	double middle(double* myarr);
	string middle(string* myarr);

};