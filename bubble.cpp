#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
	int deret[] = {15, 10, 13, 7, 22, 6, 17, 5, 7, 1};
	int n = 10;
	int i, j, temp;
	int tukar = 0;
	int start, stop;
	cout<<"Deret tak berurut = ";
	start = GetTickCount();
	for (int id = 0; id < n; ++id)
	{
		cout<<deret[id]<<" ";	
	}
	cout<<endl<<endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<" i = "<<i<<endl;
		for (int j = 0; j < n - i; ++j)
		{
			cout<<"deret["<<j<<"] > deret["<<(j+1)<<"] ? ";
			if (deret[j] > deret[j+1])
			{
				cout<<"Tukarkan ";
				temp = deret[j];
				deret[j] = deret[j+1];
				deret[j+1] = temp;

			}
			cout<<endl;
			for (int id = 0; id < n; ++id)
			{
				cout<<deret[id]<<" ";
			}
			cout<<endl;
		}
	}
	cout<<endl<<"Deret terurut = ";
	for (int id = 0; id < n; ++id)
	{
		cout<<deret[id]<<" ";
	}
	cout<<endl;
	stop = GetTickCount();
	cout<<"Waktu Eksekusi "<<n<<" Angka acak "<<(stop - start)<<"ms";
	cout<<endl;
	return 0;
}