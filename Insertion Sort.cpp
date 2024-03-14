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

void insertionsort() {	//prosedur insertion
	int temp;			//membuat variabel temporer atau penyimpanan sementara
	int i, j;			//membuat variabel j sebagai penanda

	for (i = 1; i <= n - 1; i++) {			//1.looping nilai i dimulai dari 1 hingga n-1
		temp = arr[i];						//2.menyimpan nilai arr[i] ke variabel sementara (temp)
		j = i - 1;							//3.setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp) {	//4.looping while dimana nilai j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp
			arr[j + 1] + arr[j];			//4a.simpan arr[j] ke dalam variabel arr[j+1]
			j--;							//4b.decrement nilai j by 1
		}
		arr[j + 1] = temp;					//5.menyimpan nilai temp ke arr[j+1]

		cout << "\nPass " << i << ": ";		//output ke layar
		for (int k = 0; k < n; k++) {		//looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";			//output ke layar
		}
	}
}

void display() {	//prosedur display														
	cout << endl;	//output baris kosong
	cout << "\n================================" << endl;	//output ke layar
	cout << "Elemen array yang telah tersusun" << endl;		//output ke layar
	cout << "================================" << endl;		//output ke layar

	for (int j = 0; j < n; j++){	//looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;		//output ke layar
	}
	cout << endl;					//output baris kosong
}

int main() {
	
	input();			//memanggil input
	insertionsort();	//memanggil insertionsort
	display();			//memanggil display

}
