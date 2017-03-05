#include <iostream>
#define N 10

void initMassive(int a[], int n);

int main()
{
	int a[N];
	initMassive(a,N);
	std::cout << "All right, man" << std::endl;
	return 0;
}

void initMassive(int a[], int n)
{
	for(int i = 0; i < n; ++i) *(a+i) = i;
}