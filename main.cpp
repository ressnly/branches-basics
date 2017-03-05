#include <iostream>
#include <stdlib.h>
#define N 9

void initMassive(int a[], int n);
void shackerSort(int a[], int n);
void outputMassive(int a[], int n);

int main()
{
	int a[N];
	initMassive(a,N);
	shackerSort(a,N);
	outputMassive(a,N);
	return 0;
}

void initMassive(int a[], int n)
{
	for(int i = 0; i < n; ++i) *(a+i) = rand()%10;
}

void shackerSort(int a[], int n)
{
    int k = n - 1,
        r = n - 1,
        l = 0;

    do {
        for(int i = r; i > l; i--)
        {
            if(a[i] < a[i-1])
            {
                std::swap(a[i],a[i-1]);
                k = i;
            }
        }
        l = k;

        for(int i = l; i < r; i++)
        {
            if(a[i] > a[i+1])
            {
                std::swap(a[i],a[i+1]);
                k = i;
            }
        }
        r = k;
    } while(l < r);

    return;
}

void outputMassive(int a[], int n)
{
	std::cout << std::endl;
	for(int i = 0; i < n; ++i) std::cout << *(a+i) << " ";
	std::cout << std::endl;
}