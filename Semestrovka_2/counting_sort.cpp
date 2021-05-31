#include<iostream>
#include<time.h>

using namespace std;

int k=0;

void Counting_Sort(int A[], int B[], int n, int *counter)    
{   
    
	int C[k];

	for(int i = 0; i < k + 1; i++)
	{
		C[i] = 0;
	}

	for(int j = 1; j <= n; j++)
	{
		C[A[j]]++;			    
	}
	* counter += n;
	for(int i = 1; i <= k; i++)
	{
		C[i] += C[i-1];            
	}

	for(int j = n; j >= 1; j--)
	{
		B[C[A[j]]] = A[j];          
		C[A[j]] = C[A[j]] - 1;		  
	}
	* counter += B[n];
}

int main()
{
	int counter = 0;
	int n;
	cin >> n;
	  	
	int A[n], B[n]; 
	
	for(int i = 1; i <= n; i++)        
	{
		cin >> A[i];
		if(A[i] > k)
		{
			k = A[i];              
		}
	}

    clock_t start = clock();
	Counting_Sort(A, B, n, &counter);        
	clock_t end = clock();

	for(int i = 1; i <= n; i++)       
	{
		cout << B[i] << " ";
	}
	cout << endl;
	cout << (end * 1.000000 / CLOCKS_PER_SEC) - (start * 1.000000 / CLOCKS_PER_SEC) / CLOCKS_PER_SEC * 1.000000;
	cout << endl;
	cout << counter;
	return 0;
}