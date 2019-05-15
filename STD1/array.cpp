#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[100],d;
	cout << "Masukan Jumlah Array : " ;
	cin >> d;
	
	cout << "Masukan Array #1 : " << endl;
	for(int i=0;i<d;i++)
	{
		cin >> a[i];
	}
	
	cout << "\nMasukan Array #2 : " << endl;
	for(int i=0;i<d;i++)
	{
		cin >> b[i];
	}
	
	//proses jumlah array not printed
	for(int i=0;i<d;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	
	cout << "\nArray yang telah jumlah : " << endl;
	for(int i=0;i<d;i++)
	{
		cout << c[i]<<endl;
	}
	
	
}
