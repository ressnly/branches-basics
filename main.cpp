#include <iostream>
#define N 10

void initMassive(int a[], int n);
void shackersort(int a[], int n)

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

void shackersort(int a[], int n)
{
    int k = n - 1,
        r = n - 1,
        l = 0;

    do {
        for(int i = r; i > l; i--)
        {
            if(a[i] < a[i-1])
            {
                swap(a[i],a[i-1]);
                k = i;
            }
        }
        l = k;

        for(int i = l; i < r; i++)
        {
            if(a[i] > a[i+1])
            {
                swap(a[i],a[i+1]);
                k = i;
            }
        }
        r = k;
    } while(l < r);

    return;
}