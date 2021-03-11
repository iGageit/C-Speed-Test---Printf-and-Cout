#include<iostream>
#include <ctime>
using namespace std;

int main()
{

double start, stop;
start = clock();
for (int i = 0; i<100; i++) 
{
cout<<" This is Cout " << +i <<endl;
}
stop = clock();
double start1, stop1;
start1 = clock();

for (int i = 0; i<100; i++) 
{
printf("This is a Printf \n");
}
stop1 = clock();
cout << "\nIt took " << (double(stop - start) / CLOCKS_PER_SEC) << " seconds for cout" << endl;
cout << "\nIt took " << (double(stop1 - start1) / CLOCKS_PER_SEC) << " seconds for printf" << endl;
cin.ignore();
return 0;
}