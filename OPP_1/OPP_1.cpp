#include <iostream>
using namespace std;

class Mahasiswa {
public:
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}
};

class Matakuliah {
	private:
		string kodeMk;
		string namaMk;
		int sks;
public:
	void input() {
		cout << "Kode MK: ";
		cin >> kodeMk;
		cout << "namaMk: ";
		cin >> namaMk;
		cout << "SKS: ";
		cin >> sks;
	}
	void output() {
		cout << "kode MK: " << kodeMk << endl;
		cout << "Nama MK: " << namaMk << endl;
		cout << "SKS: " << sks << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.nama = "Budi";
}