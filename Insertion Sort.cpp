#include <iostream>
using namespace std;

int arr[20];	//membuat array dengan panjang data 20
int n;			//membuat variabel input n

void input() {	//prosedur input
	while (true) {
		 cout << "Masukkan jumlah data pada array : "; //membuat input jumlah elemen array
		 cin >> n;

		if (n <= 20) {
			break;
		}
		else {
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; //menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;								//membuat jarak baris program
	cout << "=====================" << endl;	//membuat tampilan susunan data elemen array
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " :";
		cin >> arr[i];
	}
	
}

void insertionsort() {
	int temp;
	int i, j;
}

