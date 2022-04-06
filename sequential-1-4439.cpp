#include <iostream>

using namespace std;

int main()
{
	int nilai[] = { 20, 10, 40, 80, 70, 50, 30, 60, 100, 75, 85};
	
	int jumlahElementArray = sizeof(nilai) / sizeof(int);
	
	 cout << "Data nilai : " << endl;
	 for (int index = 0; index < jumlahElementArray; index++)
	 {
	 	cout << nilai[index] << " ";
	 }
	 cout << endl << endl;
	 
	 int cari = 0;
	 cout << "Masukkan nilai yang anda cari : "; cin >> cari;
	 
	 bool isKetemu = false;
	 
	 // pengecekan nilai yang dicari
	 int index;
	 for (index = 0; index < jumlahElementArray; index++)
	 {
	 	// lakukan perbandingan nilai array dengan nilai yang dicari
	 	if (cari == nilai[index])
	 	{
	 		isKetemu = true ; // data ditemukan
	 		break; // keluar dari perulangan
		 }
	 }
	 cout << endl;
	 
	 if (isKetemu)
	 {
	 	cout << "data ditemukan pada index ke-" << index << endl << endl;
	 }
	 else
	 {
	 	cout << "Data tidak ditemukan" << endl << endl;
	 }
	 
	 system("pause");
	 return 0;
}
