#include<iostream>
#include <string>
#include "Overloading.h"

using namespace std;

void overloading::sort(int* myarr, int count) {

	}
void overloading::sort(double* myarr, int count) {

	}
void overloading::sort(string* myarr, int count) {

	}
int overloading::middle(int* myarr, int count) {
		sort(myarr,count);
		if (count % 2 == 1) {
			return *(myarr +(count/2));
		}
		else {
			return (*(myarr + (count / 2)) + *(myarr + (count / 2)-1)) / 2;
		}
	}
double overloading::middle(double* myarr, int count) {
	sort(myarr, count);
	if (count % 2 == 1) {
		return *(myarr + (count / 2));
	}
	else {
		return (*(myarr + (count / 2)) + *(myarr + (count / 2) - 1)) / 2;
	}
	}
string* overloading::middle(string** myarr, int count) {
	sort(*myarr, count);
	return (*myarr + (count / 2));

}
int overloading::min(int* myarr, int count){
	return *myarr;
}
double overloading::min(double* myarr, int count) {
	return *myarr;
}
string* overloading::min(string** myarr, int count) {
	return *myarr;

}

int overloading::max(int* myarr, int count) {
	return *(myarr + count-1) ;
	
}
double overloading::max(double* myarr, int count) {
	return *(myarr + count - 1);

}
string* overloading::max(string** myarr, int count) {
	return *(myarr + count - 1);

}

int main() {




	return 0;
}

