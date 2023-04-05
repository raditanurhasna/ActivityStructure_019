#include <iostream>
using namespace std;

struct Mahasiswa
{
	string NIM;
	string Nama;
	string Alamat;
	int umur;

};

int main()
{
	Mahasiswa mhs;

	cout << "Masukkan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama = ";
	cin >> mhs.Nama;
	cout <<  "Masukkan Alamat = ";
	cin >> mhs.Alamat;
	cout << "Masukkan Umur = ";
	cin >> mhs.umur;

	cout << "n\ NIM =" << mhs.NIM;
	cout << "n\ Nama =" << mhs.Nama;
	cout << "n\ Alamat =" << mhs.Alamat;
	cout << "n\ umur =" << mhs.umur;

}