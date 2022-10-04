﻿#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include<iomanip>
double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}
int main() {
	double x = 0;//х=а, x∈[a,b]
	double b = 1;
	double step = 0.05;
	double eps = 0.001;//do while x>eps
	double s = 0;//сумма
	double tek = 0;//член суммы
	int i_nach = 2;
	//int x = 0;
	std::cout << "   x    s(x)  f(x)" << std::endl;
	for (; x <= b; x += step) {
		tek = x * sin(M_PI / 4);
		s = 0;
		for (int i = i_nach; i < 100; i++) {
			if (abs(tek) >= eps) {
				s += tek;
				tek = pow(x, i) * sin(i * M_PI / 4);
			}
			else {
				break;
			}
		}
		std::cout << std::fixed << std::setprecision(3);
		double y = 0;
		y = x * sin(M_PI / 4) / (1 - 2 * x * cos(M_PI / 4));
		std::cout << x << " " << s << " " << y <<std::endl;
		std::cout << std::endl;
	}
	//std::cout << fact(4);
}

