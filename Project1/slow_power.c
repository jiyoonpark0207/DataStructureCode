#include <stdio.h>

double slow_power(double x, int n) {
	int i ; 
	double result = 1.0;
	
	for (i = 0; i < n; i++) {
		result *= x;
	}
	return result;
}
//int main() {
//	printf("%.0f", slow_power(2, 10));
//}