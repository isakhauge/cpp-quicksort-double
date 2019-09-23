#include <iostream>
#include <string>
#include "quicksort.h"

using namespace std;

void print(double arr[], int length);

int main() {
	#define N 10
	double test2[N] = {6.0,4.0,1.0,10.1,20.0,5.5,31.2,9.9,0,3.3};
	//double test2[N] = {6,4,1,10,20,5,31,9,0,3};
	//double test2[N] = {9,4};
	print(test2,N);
	ikh::quickSort(test2, 0, N, N);
	print(test2,N);
	return 0;
}

void print(double arr[], int length) {
	std::string separator = "";
	std::cout << "Original: [";
	for (int i=0; i<length; i++)
		std::cout << ((i==0) ? "" : ", ") << arr[i];
	std::cout << "]\n";
}