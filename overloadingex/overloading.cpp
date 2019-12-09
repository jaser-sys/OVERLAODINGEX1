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


double overloading::sum(double* myarr, int count) {
	double sum = 0;

	for (int i = 0; i < count; i++) {
		sum += *(myarr + i);
	}
	return sum;
}


int overloading::sum(int* myarr, int count) {
	int sum = 0;

	for (int i = 0; i < count; i++) {
		sum += *(myarr + i);
	}
	return sum;
}

int overloading::stdev(int* myarr, int count) {
	int ans = 0;
	int sumIs = sum(myarr, count);
	int avg = sumIs / count;
	int sigma = 0;
	int subavg = 0;
	int sequared = 0;
	int  midres = 0;
	for (int i = 0; i < count; i++) {
		subavg = (*(myarr + i) - avg);
		sequared = subavg * subavg;
		sigma += sequared;
	}
	midres = sigma / count;
	ans = sqrt(midres);

	return ans;
}


double overloading::stdev(double* myarr, int count) {
	double ans = 0;
	double sumIs = sum(myarr, count);

	double avg = sumIs / count;
	double sigma = 0;
	double subavg = 0;
	double sequared = 0;
	double  midres = 0;
	for (int i = 0; i < count; i++) {

		subavg = fabs((*(myarr + i) - avg));

		sequared = (subavg * subavg);
		sigma += sequared;
	}
	midres = sigma / count;
	ans = sqrt(midres);

	return ans;
}

void overloading::stdev(string* myarr, int count) {

	printf("%s", "Unavailable operation for string type");
}


int main() {




	return 0;
}

