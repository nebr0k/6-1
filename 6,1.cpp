#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);

}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
   cout << endl;
   
   int K(int* a, const int size);
   {
	   int k = 0;
	   for (int i = 0; i < size; i++)
		   if (a[i] < 0 && i % 2 != 0)
			   k++;
	   cout << "K = " << k << endl;
   }
   

   int Sum(int* a, const int size);
   {
	   int S = 0;
	   for (int i = 0; i < size; i++)
		   if (a[i] < 0 && i % 2 != 0)
			   S += a[i]; 
	   cout << "S = " << S << endl;
   }
   for (int i = 0; i < size; i++)
	   if (a[i] < 0 && i % 2 != 0)
	   {
		   cout << setw(4) << 0;
	   }
	   else
	   {
		   cout << setw(4) << a[i];
	   }
     
   cout << endl;
} 

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 26;
	int a[n];
	int Low = -40;
	int High = 20;
	Create(a, n, Low, High);
	Print(a, n);
	return 0;
}